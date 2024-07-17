
PROGRAM _INIT

    P_Step := P_WAIT_ENABLE;
    Error := FALSE;

    PlaceHoldersSpacing := 120; // distance between two consecutive place holders
    	 
END_PROGRAM

PROGRAM _CYCLIC
	
    CASE P_Step OF
        P_WAIT_ENABLE:
            P_Step := P_ENABLE_REGISTER_FB;
			
        P_ENABLE_REGISTER_FB:
            MpPickRegister_0.Enable := TRUE;
            P_Step := P_WAIT_ENABLE_REGISTER_FB;
			
        P_WAIT_ENABLE_REGISTER_FB:
            IF MpPickRegister_0.Active THEN
                P_Step := P_ENABLE_REGISTER_COMP;
            
            ELSIF MpPickRegister_0.Error THEN
                LastStep := P_Step;
                P_Step := P_ERROR;
            END_IF;
			
        P_ENABLE_REGISTER_COMP:
            MpPickRegister_0.RegisterEnable := TRUE;
            P_Step := P_WAIT_ENABLE_REGISTER_COMP;
			
        P_WAIT_ENABLE_REGISTER_COMP:
            IF MpPickRegister_0.RegisterActive THEN
                P_Step := P_ENABLE_ADD_REGISTER_FBS;
            
            ELSIF MpPickRegister_0.Error THEN
                LastStep := P_Step;
                P_Step := P_ERROR;
            END_IF;
			
        P_ENABLE_ADD_REGISTER_FBS:
            MpPickRegCreatePlaceholder.Enable := TRUE;
            MpPickRegCreatePlaceholder.Create := FALSE;
            P_Step := P_WAIT_ENABLE_ADD_REGISTER_FBS;
			
        P_WAIT_ENABLE_ADD_REGISTER_FBS:
            IF 	MpPickRegCreatePlaceholder.Active THEN
                P_Step := P_WAIT_START_PROCESS;
            
            ELSIF MpPickRegCreatePlaceholder.Error THEN
                LastStep := P_Step;
                P_Step := P_ERROR;
            END_IF;
			
        P_WAIT_START_PROCESS: // waits user start command and conveyor moving
            ReadyPlaceReg := TRUE;
            IF CmdStart AND ReadyToStart AND (PlaceConveyorPosition > 0) THEN
                P_Step := P_CREATE_OBJECTS;
            END_IF;
			
        (* We need to create positions (place holders) on place conveyor where to place picked objects *)
        P_CREATE_OBJECTS:
        
            ElapsedDistance := DistanceOverPeriod(PlaceConveyorPosition, LastPlaceHolderConveyorPosition, PlaceConveyorLength);
            
            IF (ElapsedDistance >= PlaceHoldersSpacing) THEN
        
                MpPickRegCreatePlaceholder.Parameters.LatchedConveyor.Position := PlaceConveyorPosition;
                MpPickRegCreatePlaceholder.Parameters.Mode := mpPICK_CREATE_SINGLEITEM_PLACEH;
                MpPickRegCreatePlaceholder.Parameters.ObjectTypeName := 'MyProduct';
                MpPickRegCreatePlaceholder.Parameters.Translation.X := 0;
                MpPickRegCreatePlaceholder.Parameters.Translation.Y := 125; // in the middle of conveyor width
                MpPickRegCreatePlaceholder.Create := TRUE;

                LastPlaceHolderConveyorPosition := MpPickRegCreatePlaceholder.Parameters.LatchedConveyor.Position;
            ELSE
                MpPickRegCreatePlaceholder.Create := FALSE;
            END_IF
			
        P_ERROR:
            Error := TRUE;
            ReadyPlaceReg := FALSE;

    END_CASE;
    
    (* FB calls *)    
    MpPickRegister_0.MpLink := ADR(gPlaceRegister);
    MpPickRegister_0();
    
    MpPickRegCreatePlaceholder.MpLink := ADR(gPlaceRegister);
	MpPickRegCreatePlaceholder();
	 
END_PROGRAM


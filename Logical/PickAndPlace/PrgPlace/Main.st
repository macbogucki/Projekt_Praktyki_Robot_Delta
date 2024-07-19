
PROGRAM _INIT

    P_Step := P_WAIT_ENABLE;
    Error := FALSE;

    PlaceHoldersSpacing := 120; // distance between two consecutive place holders
    	 
END_PROGRAM

PROGRAM _CYCLIC
	
    CASE P_Step OF
		P_WAIT_ENABLE:
			IF NOT AbortExecute AND NOT StopExecute THEN
				P_Step := P_ENABLE_REGISTER_FB;
				StopExecutedPlace := FALSE;
			END_IF
			
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
            MpPickRegCreateContainer.Enable := TRUE;
            MpPickRegCreateContainer.Create := FALSE;
            P_Step := P_WAIT_ENABLE_ADD_REGISTER_FBS;
			
        P_WAIT_ENABLE_ADD_REGISTER_FBS:
            IF 	MpPickRegCreateContainer.Active THEN
                P_Step := P_WAIT_START_PROCESS;
            
            ELSIF MpPickRegCreateContainer.Error THEN
                LastStep := P_Step;
                P_Step := P_ERROR;
            END_IF;
			
        P_WAIT_START_PROCESS: // waits user start command and conveyor moving
            ReadyPlaceReg := TRUE;
            IF CmdStart AND ReadyToStart THEN
                P_Step := P_CREATE_OBJECTS;
            END_IF;
			
        (* We need to create positions (place holders) on place conveyor where to place picked objects *)
        P_CREATE_OBJECTS:
        
            ElapsedDistance := DistanceOverPeriod(PlaceConveyorPosition, LastPlaceHolderConveyorPosition, PlaceConveyorLength);
            
            IF (ElapsedDistance >= PlaceHoldersSpacing) THEN
        
                MpPickRegCreateContainer.Parameters.LatchedConveyor.Position := PlaceConveyorPosition;
                MpPickRegCreateContainer.Parameters.Mode := mpPICK_CREATE_CONTAINER_EMPTY;
				//MpPickRegCreatePlaceholder.Parameters.ObjectTypeName := 'MyProduct';
				MpPickRegCreateContainer.Parameters.ObjectTypeName := 'MyContainer';
                MpPickRegCreateContainer.Parameters.Translation.X := 30;
				MpPickRegCreateContainer.Parameters.Translation.Y := 30;// in the middle of conveyor width
				MpPickRegCreateContainer.Parameters.Translation.Z := 10;
				MpPickRegCreateContainer.Create := TRUE;

                LastPlaceHolderConveyorPosition := MpPickRegCreateContainer.Parameters.LatchedConveyor.Position;
            ELSE
                MpPickRegCreateContainer.Create := FALSE;
            END_IF
			
        P_ERROR:
            Error := TRUE;
            ReadyPlaceReg := FALSE;

	END_CASE;
	
	IF AbortExecute OR StopExecute THEN
		ReadyPlaceReg := FALSE;
		P_Step := P_WAIT_ENABLE;
		StopExecutedPlace := TRUE;
	END_IF
	
    (* FB calls *)    
    MpPickRegister_0.MpLink := ADR(gPlaceRegister);
    MpPickRegister_0();
    
    //MpPickRegCreatePlaceholder.MpLink := ADR(gPlaceRegister);
	//MpPickRegCreatePlaceholder();
	
	MpPickRegCreateContainer.MpLink := ADR(gPlaceRegister);
	MpPickRegCreateContainer();
	
	 
END_PROGRAM


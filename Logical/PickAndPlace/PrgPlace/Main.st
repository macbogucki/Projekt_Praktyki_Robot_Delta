
PROGRAM _INIT

    P_Step := P_WAIT_ENABLE;
    Error := FALSE;

	PlaceHoldersSpacing := 120; // distance between two consecutive place holders
	numberOfDeletes := 0;
	
END_PROGRAM

PROGRAM _CYCLIC
	
//	IF NOT(gManualMode) THEN
	
	TON_0();
	TON_0.PT := T#5s;
	
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
            MpPickRegCreateContainer.Enable := TRUE;
			MpPickRegCreateContainer.Create := FALSE;
			MpPickRegGetObjectsContainer.Enable := TRUE;
			MpPickRegDeleteTokens.Enable := TRUE;
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
				MpPickRegCreateContainer.Parameters.ObjectTypeName := 'MyContainer';
                MpPickRegCreateContainer.Parameters.Translation.X := 30;
				MpPickRegCreateContainer.Parameters.Translation.Y := 30;// in the middle of conveyor width
				MpPickRegCreateContainer.Parameters.Translation.Z := 10;
				ContainerID := MpPickRegCreateContainer.ObjectPositionId;
				MpPickRegCreateContainer.Create := TRUE; 
			
				LastPlaceHolderConveyorPosition := MpPickRegCreateContainer.Parameters.LatchedConveyor.Position;
			ELSE
// Moze to trzeba rozwazyc ->ContainerID := MpPickRegCreateContainer.ObjectPositionId;
                MpPickRegCreateContainer.Create := FALSE;
            END_IF
			
        P_ERROR:
            Error := TRUE;
            ReadyPlaceReg := FALSE;

	END_CASE;
	
	
	

	MpPickRegGetObjectsContainer.Get := FALSE;
	MpPickRegDeleteTokens.Delete := FALSE;
	IF (MpPickRegGetObjectsContainer.Get = FALSE) THEN
		TON_0.IN := TRUE;
		IF TON_0.Q THEN
			MpPickRegGetObjectsContainer.Get := TRUE;
			TON_0.IN := FALSE;
		END_IF
	END_IF	
	
	IF ContainerID > 0 THEN
		
		MpPickRegGetObjectsContainer.Parameters.DataAddress := ADR(gContainerInfo);
		MpPickRegGetObjectsContainer.Parameters.GetMode := mpPICK_GET_CONTAINER_CONTENT;
		MpPickRegGetObjectsContainer.Parameters.ObjectPositionId := ContainerID;
		MpPickRegGetObjectsContainer.Parameters.ObjectTypeName := 'MyContainer';			
		MpPickRegGetObjectsContainer.Parameters.NumberOfObjectPositions := 4;
		MpPickRegGetObjectsContainer.MpLink := ADR(gPlaceRegister);
		MpPickRegGetObjectsContainer();
		
	END_IF;
	
	
	FOR Iterator := 0 TO 3 DO
		IF (gContainerInfo[Iterator].ObjectPositionInfo = mpPICK_INFO_CONTAINED_OBJECT AND gDeleteObjects) THEN
			MpPickRegDeleteTokens.Parameters.ObjectTypeName := 'MyContainer';
			MpPickRegDeleteTokens.Parameters.ObjectPositionId := gContainerInfo[Iterator].ObjectPositionId;
			MpPickRegDeleteTokens.Delete := TRUE;
			numberOfDeletes := numberOfDeletes + 1;
		ELSE
			MpPickRegDeleteTokens.Parameters.ObjectTypeName := 'MyContainer';
			MpPickRegDeleteTokens.Parameters.ObjectPositionId := gContainerInfo[Iterator].ObjectPositionId;
			MpPickRegDeleteTokens.Delete := FALSE;
			
		END_IF;
		IF numberOfDeletes = 4 THEN
			P_Step := P_WAIT_ENABLE;
			numberOfDeletes := 0;
		END_IF
		
	//	MpPickRegDeleteTokens.MpLink := ADR(gPlaceRegister);
	//	MpPickRegDeleteTokens();
		
	END_FOR;
	gDeleteObjects := 0;
	
    
    (* FB calls *)    
    MpPickRegister_0.MpLink := ADR(gPlaceRegister);
    MpPickRegister_0();
	
	MpPickRegCreateContainer.MpLink := ADR(gPlaceRegister);
	MpPickRegCreateContainer();
	
	
	MpPickRegDeleteTokens.MpLink := ADR(gPlaceRegister);
	MpPickRegDeleteTokens();
	
	
//	END_IF
	 
END_PROGRAM


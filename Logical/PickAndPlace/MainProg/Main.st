
PROGRAM _INIT
	MainInitAction;
	
END_PROGRAM

PROGRAM _CYCLIC
	
	//Configuring PackML
	MpPackCyclicAction;
	
	PackMLCurrentState := MpPackMLStateCurrent(gPackMLCore);
	
	// State machine in PackML standard
	CASE PackMLCurrentState OF
		mpPACKML_STATE_UNDEFINED:
			
			PackMLCurrentStateString := 'Undefined';
		//State in which pcoess is being stopped slowly
		mpPACKML_STATE_STOPPING:
			
			PackMLCurrentStateString := 'Stopping';
			MpAxisBasic_0.MoveVelocity := FALSE;
			MpAxisBasic_1.MoveVelocity := FALSE;
			
			StopExecute := TRUE;
			CmdStart := FALSE;
			IF StopExecutedPick AND StopExecutedPickCore AND StopExecutedPlace THEN
				ReadyMechanics := FALSE;
				MpPackMLStateComplete(gPackMLCore,1);
			END_IF
		
		// Program is stopped and waiting for reset command 
		mpPACKML_STATE_STOPPED:
			PackMLCurrentStateString := 'Stopped';
			MpPackMLMode_0.Clear := FALSE;
			MpPackMLMode_0.Stop := FALSE;
			StopExecute := FALSE;
			RES_Step := HOMING_DELTA;
		
		// Program parameters are reseting in this state
		mpPACKML_STATE_RESETTING:
			PackMLCurrentStateString := 'Resetting';
			MpPackMLMode_0.Reset := FALSE;
			gDeleteObjects := TRUE;
			ResetExecutePickCore := TRUE;
			IF ResetExecutedPickCore THEN
				ResetingAction;
			END_IF
		
		// Idle state - watiting for START command
		mpPACKML_STATE_IDLE:
			PackMLCurrentStateString := 'Idle';
			gDeleteObjects := FALSE;
			ResetExecutePickCore := FALSE;
			ResetExecutedPickCore := FALSE;
			ReadyMechanics := TRUE;
			IF CmdStart AND ReadyToStart THEN
				MpPackMLMode_0.Start := TRUE;
			END_IF;
		
		// Starting state - conveyor start
		mpPACKML_STATE_STARTING:
			PackMLCurrentStateString := 'Starting';
			MpPackMLMode_0.Start := FALSE;
			IF NOT(gManualMode) THEN
				MpAxisBasic_0.MoveVelocity := TRUE;
				MpAxisBasic_1.MoveVelocity := TRUE;
				
				IF MpAxisBasic_0.Info.PLCopenState = mcAXIS_CONTINUOUS_MOTION THEN
					ProgramPickExecuteBool := TRUE;		// condition in Pick program
					MpPackMLStateComplete(gPackMLCore,1);
				END_IF
			END_IF
			
		mpPACKML_STATE_EXECUTE:
			
			PackMLCurrentStateString := 'Execute';
		// aborting -> when imidiate stop is in use
		mpPACKML_STATE_ABORTING:
			PackMLCurrentStateString := 'Aborting';
			AbortingAction;
		
		// Program is aborted. powers are shut down - waiting for cleaning command
		mpPACKML_STATE_ABORTED:
			PackMLCurrentStateString := 'Aborted';
			MpPackMLMode_0.Abort := FALSE;
			AbortExecute := FALSE;
			
			//Clearing alarms/bugs/warnings
		mpPACKML_STATE_CLEARING:
			PackMLCurrentStateString := 'Clearing';
			MpPackMLStateComplete(gPackMLCore,1);

	END_CASE;
	
	ReadyToStart := ReadyMechanics AND ReadyPickReg AND ReadyPlaceReg AND ReadyPickCore;
	
	//Conveyor homing information for camera
	IF MpAxisBasic_0.IsHomed THEN
		gIsConvHomed := TRUE;
	ELSE
		gIsConvHomed := FALSE;
	END_IF
	
	//Manual move configuration
	CheckManualAction;
	
	//MpPack init
	MpPackMLMode_0();
	MpPackMLCore_0();
	
	//All axis configuration -mplink -config -init
	AxisConfigAction;
    
	//Updating both conveyors position
	PickConveyorPosition  := MpAxisBasic_0.Position;
	PlaceConveyorPosition := MpAxisBasic_1.Position;
	
END_PROGRAM

PROGRAM _EXIT
	(* Insert code here *)
	 
END_PROGRAM


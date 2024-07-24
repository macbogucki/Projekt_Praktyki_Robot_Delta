
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
			
		//State in which pcoess is being stopped slowly
		mpPACKML_STATE_STOPPING:
			StopExecute := TRUE;
			CmdStart := FALSE;
			IF StopExecutedPick AND StopExecutedPickCore AND StopExecutedPlace THEN
				ReadyMechanics := FALSE;
				MpPackMLStateComplete(gPackMLCore,1);
			END_IF
		
		// Program is stopped and waiting for reset command 
		mpPACKML_STATE_STOPPED:
			MpPackMLMode_0.Clear := FALSE;
			MpPackMLMode_0.Stop := FALSE;
			StopExecute := FALSE;
			RES_Step := HOMING_DELTA;
		
		// Program parameters are reseting in this state
		mpPACKML_STATE_RESETTING:
			gDeleteObjects := TRUE;
			ResetExecutePickCore := TRUE;
			IF ResetExecutedPickCore THEN
				MpPackMLMode_0.Reset := FALSE;
				ResetingAction;
			END_IF
		
		// Idle state - watiting for START command
		mpPACKML_STATE_IDLE:
			gDeleteObjects := FALSE;
			ResetExecutePickCore := FALSE;
			ResetExecutedPickCore := FALSE;
			ReadyMechanics := TRUE;
			IF CmdStart AND ReadyToStart THEN
				MpPackMLMode_0.Start := TRUE;
			END_IF;
		
		// Starting state - conveyor start
		mpPACKML_STATE_STARTING:
			IF MpPackMLMode_0.Start THEN
				MpPackMLMode_0.Start := FALSE;
			END_IF
			
			IF NOT(gManualMode) THEN
				MpAxisBasic_0.MoveVelocity := TRUE;
				MpAxisBasic_1.MoveVelocity := TRUE;
				IF MpAxisBasic_0.Info.PLCopenState = mcAXIS_CONTINUOUS_MOTION THEN
					ProgramPickExecuteBool := TRUE;		// condition in Pick program
					MpPackMLStateComplete(gPackMLCore,1);
				END_IF
			END_IF
			
		mpPACKML_STATE_EXECUTE:
			
		// aborting -> when imidiate stop is in use
		mpPACKML_STATE_ABORTING:
			MpDelta4Axis_0.Power := FALSE;
			MpAxisBasic_0.Power := FALSE;
			ReadyMechanics := FALSE;
			AbortExecute := TRUE;
			CmdStart := FALSE;
			IF NOT MpDelta4Axis_0.PowerOn
				AND NOT MpAxisBasic_0.PowerOn THEN
					MpPackMLStateComplete(gPackMLCore,1);
			END_IF 
		
		// Program is aborted. powers are shut down - waiting for cleaning command
		mpPACKML_STATE_ABORTED:
			MpPackMLMode_0.Abort := FALSE;
			AbortExecute := FALSE;
			
			//Clearing alarms/bugs/warnings
		mpPACKML_STATE_CLEARING:
			MpPackMLStateComplete(gPackMLCore,1);

	END_CASE;
	
	IF MpAxisBasic_0.IsHomed THEN
		gIsConvHomed := TRUE;
   ELSE
		gIsConvHomed := FALSE;
	END_IF
	
	ReadyToStart := ReadyMechanics AND ReadyPickReg AND ReadyPlaceReg AND ReadyPickCore;
	
	
	CheckManualAction;
	
	ReadyToStart := ReadyMechanics AND ReadyPickReg AND ReadyPlaceReg AND ReadyPickCore;
	
	//MpPack init
	MpPackMLMode_0();
	MpPackMLCore_0();
	
	//All axis configuration -mplink -config -init
	AxisConfigAction;
    ConvVelocityDegrees:=MpAxisBasic_0.Velocity;
	//Updating both conveyors position
	PickConveyorPosition  := MpAxisBasic_0.Position;
	PlaceConveyorPosition := MpAxisBasic_1.Position;
	
END_PROGRAM

PROGRAM _EXIT
	(* Insert code here *)
	 
END_PROGRAM



PROGRAM _INIT
	(* Insert code here *)
	MpPackMLCore_0.Enable := TRUE;
	MpPackMLMode_0.Enable := TRUE;
	MpDelta4Axis_0.Override := 100.0; 
	MpDelta4Axis_0.Enable   := TRUE; 
	
	AxisParameters_0.Velocity     := 50.0;
	AxisParameters_0.Acceleration := 20.0;
	AxisParameters_0.Deceleration := 20.0;

	AxisParameters_1.Velocity     := 0.0;
	AxisParameters_1.Acceleration := 1.0;
	AxisParameters_1.Deceleration := 1.0;
    
	MpAxisBasic_0.Enable := TRUE;
	MpAxisBasic_1.Enable := TRUE;
	MpAxisBasic_Q1.Enable := TRUE;
	MpAxisBasic_Q2.Enable := TRUE;
	MpAxisBasic_Q3.Enable := TRUE;
	MpAxisBasic_Q4.Enable := TRUE;
        
	// dummy call of axis PVs just to avoid warning -2141192189 "The PV 'gAxisQx' does not exists" in logger
	
	gAxisQ1;
	gAxisQ2;
	gAxisQ3;
	gAxisQ4;
	
	place := 0;
	conv := 0;
	
	IF DiagCpuIsARsim() THEN
		homingModeQ1.Homing.Mode := mcHOMING_DIRECT;
		homingModeQ2.Homing.Mode := mcHOMING_DIRECT;
		homingModeQ3.Homing.Mode := mcHOMING_DIRECT;
		homingModeQ4.Homing.Mode := mcHOMING_DIRECT;
	ELSE
		homingModeQ1.Homing.Mode := mcHOMING_DEFAULT;
		homingModeQ2.Homing.Mode := mcHOMING_DEFAULT;
		homingModeQ3.Homing.Mode := mcHOMING_DEFAULT;
		homingModeQ4.Homing.Mode := mcHOMING_DEFAULT;
	END_IF;
	
	//Activate block and set first state to Stopping (important, )
	MpPackMLMode_0.Activate := TRUE;
	MpPackMLMode_0.Stop := TRUE;
	
	
	
END_PROGRAM

PROGRAM _CYCLIC
	(* Insert code here *)
	MpPackMLCore_0.MpLink := ADR(gPackMLCore);
	MpPackMLMode_0.MpLink := ADR(gPackMLCore);
	MpPackMLMode_0.ModeID := 1;
	
	MpPackMLMode_0.StateComplete := FALSE;
	
	PackMLCurrentState := MpPackMLStateCurrent(gPackMLCore);
	CASE PackMLCurrentState OF
		mpPACKML_STATE_UNDEFINED:
			
			
		mpPACKML_STATE_STOPPING:
			MpDelta4Axis_0.Power := FALSE;
			MpAxisBasic_0.Power := FALSE;
			ReadyMechanics := FALSE;
			StopExecute := TRUE;
			IF StopExecutedPick AND StopExecutedPickCore AND StopExecutedPlace THEN
				MpPackMLStateComplete(gPackMLCore,1);
			END_IF
			
		mpPACKML_STATE_STOPPED:
			MpPackMLMode_0.Clear := FALSE;
			MpPackMLMode_0.Stop := FALSE;
			StopExecute := FALSE;
			RES_Step := HOMING_DELTA;
		
		mpPACKML_STATE_RESETTING:
			ResetExecutePickCore := TRUE;
			IF ResetExecutedPickCore THEN
				MpPackMLMode_0.Reset := FALSE;
				ActionReseting;
			END_IF
		
		// Idle state - watiting for START command
		mpPACKML_STATE_IDLE:
			ResetExecutePickCore := FALSE;
			ResetExecutedPickCore := FALSE;
			ReadyMechanics := TRUE;
			IF CmdStart AND ReadyToStart THEN
				MpPackMLMode_0.Start := TRUE;
			END_IF;
		
		// Starting state - conveyor start
		mpPACKML_STATE_STARTING:
			MpAxisBasic_0.MoveVelocity := TRUE;
			MpAxisBasic_1.MoveVelocity := TRUE;
			IF MpPackMLMode_0.Start THEN
				MpPackMLMode_0.Start := FALSE;
			END_IF	
			IF MpAxisBasic_0.Info.PLCopenState = mcAXIS_CONTINUOUS_MOTION THEN
				ProgramPickExecuteBool := TRUE;
				MpPackMLStateComplete(gPackMLCore,1);
			END_IF
			
		mpPACKML_STATE_EXECUTE:
			

		mpPACKML_STATE_ABORTING:
			MpDelta4Axis_0.Power := FALSE;
			MpAxisBasic_0.Power := FALSE;
			ReadyMechanics := FALSE;
			AbortExecute := TRUE;
			IF NOT MpDelta4Axis_0.PowerOn
				AND NOT MpAxisBasic_0.PowerOn THEN
					MpPackMLStateComplete(gPackMLCore,1);
			END_IF 
			
		mpPACKML_STATE_ABORTED:
			MpPackMLMode_0.Abort := FALSE;
			AbortExecute := FALSE;
			
		mpPACKML_STATE_CLEARING:
			MpPackMLStateComplete(gPackMLCore,1);

	END_CASE;
	
	ReadyToStart := ReadyMechanics AND ReadyPickReg AND ReadyPlaceReg AND ReadyPickCore;
	
	MpPackMLMode_0();
	MpPackMLCore_0();
	
	MpDelta4Axis_0.MpLink     := ADR(g4AxDeltaA);
	MpDelta4Axis_0.Parameters := ADR(DeltaParameters); 
	MpDelta4Axis_0();
    
	MpAxisBasic_0.MpLink     := ADR(gAxis_1);
	MpAxisBasic_0.Parameters := ADR(AxisParameters_0);
	MpAxisBasic_0();
    
	MpAxisBasic_1.MpLink     := ADR(gAxis_2);
	MpAxisBasic_1.Parameters := ADR(AxisParameters_1);
	MpAxisBasic_1();
	
	MpAxisBasic_Q1.MpLink := ADR(gAxisQ1);
	MpAxisBasic_Q1.Parameters := ADR(homingModeQ1);
	MpAxisBasic_Q1();
	
	MpAxisBasic_Q2.MpLink := ADR(gAxisQ2);
	MpAxisBasic_Q2.Parameters := ADR(homingModeQ2);
	MpAxisBasic_Q2();
		
	MpAxisBasic_Q3.MpLink := ADR(gAxisQ3);
	MpAxisBasic_Q3.Parameters := ADR(homingModeQ3);
	MpAxisBasic_Q3();
	
	MpAxisBasic_Q4.MpLink := ADR(gAxisQ4);
	MpAxisBasic_Q4.Parameters := ADR(homingModeQ4);
	MpAxisBasic_Q4();
    
	PickConveyorPosition  := MpAxisBasic_0.Position;
	PlaceConveyorPosition := MpAxisBasic_1.Position;
END_PROGRAM

PROGRAM _EXIT
	(* Insert code here *)
	 
END_PROGRAM


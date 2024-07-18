PROGRAM _INIT

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
	
	
	
END_PROGRAM

PROGRAM _CYCLIC
    
    (* Prepare mechanics: Robot & conveyors *)
    CASE RC_Step OF
        
        (* first preparing robot *)
        RC_WAIT_ENABLE:  
            IF MpDelta4Axis_0.Active THEN
                RC_Step := RC_POWER_ROBOT;
            END_IF
            
        RC_POWER_ROBOT: 
            MpDelta4Axis_0.Power := TRUE;
            IF MpDelta4Axis_0.PowerOn THEN
                RC_Step := RC_HOME_ROBOT;
            END_IF
            
        RC_HOME_ROBOT: 
           MpDelta4Axis_0.Home := TRUE;
           IF MpDelta4Axis_0.IsHomed THEN
                MpDelta4Axis_0.Home := FALSE;
                RC_Step := RC_ROBOT_READY;
           END_IF
           
        RC_ROBOT_READY:
            RC_Step := RC_WAIT_ENABLE_AXIS_FB;
        
        (* preparing conveyors *)			
        RC_WAIT_ENABLE_AXIS_FB:
            IF MpAxisBasic_0.Active THEN	
                IF MpAxisBasic_1.Active THEN		
                    RC_Step := RC_POWER_AXIS;
                END_IF
            ELSIF MpAxisBasic_0.Error OR MpAxisBasic_1.Error THEN
                LastStep := RC_Step;
                RC_Step  := RC_ERROR;
            END_IF;
			
        RC_POWER_AXIS:
            MpAxisBasic_0.Power := TRUE;
            MpAxisBasic_1.Power := TRUE;
            RC_Step := RC_WAIT_POWER_AXIS;
			
        RC_WAIT_POWER_AXIS:
            IF MpAxisBasic_0.PowerOn THEN
                IF MpAxisBasic_1.PowerOn THEN
                    RC_Step := RC_HOME_AXIS;
                END_IF
            ELSIF MpAxisBasic_0.Error OR MpAxisBasic_1.Error THEN
                LastStep := RC_Step;
                RC_Step  := RC_ERROR;
            END_IF;
			
        RC_HOME_AXIS:
            MpAxisBasic_0.Home := TRUE;
            MpAxisBasic_1.Home := TRUE;
            RC_Step := RC_WAIT_HOME_AXIS;
			
        RC_WAIT_HOME_AXIS:
            IF MpAxisBasic_0.IsHomed THEN
                IF MpAxisBasic_0.IsHomed THEN
                    MpAxisBasic_0.Home := FALSE;
                    MpAxisBasic_1.Home := FALSE;
                    RC_Step := RC_READY;
                END_IF
            ELSIF MpAxisBasic_0.Error OR MpAxisBasic_1.Error THEN
                LastStep := RC_Step;
                RC_Step  := RC_ERROR;
            END_IF;
        
		//Tutaj zaczyna siê start procesu pick and place conv->static
        RC_READY:
            ReadyMechanics := TRUE;
            IF CmdStart AND ReadyToStart THEN
                RC_Step := RC_START_PROCESS;
            END_IF;
            
        (* start conveyors to move *)
        RC_START_PROCESS:
            MpAxisBasic_0.MoveVelocity := TRUE;
            MpAxisBasic_1.MoveVelocity := TRUE;  //Dotyczy "drugiej taœmy" czyli stanowiska do odk³adania kr¹¿ków
            RC_Step := RC_WAIT_PROCESS_STARTED;
			
        RC_WAIT_PROCESS_STARTED:
            IF MpAxisBasic_0.Info.PLCopenState = mcAXIS_CONTINUOUS_MOTION THEN	
                IF MpAxisBasic_1.Info.PLCopenState = mcAXIS_CONTINUOUS_MOTION THEN
                    RC_Step := RC_PROCESSING;
                END_IF
            ELSIF MpAxisBasic_0.Error OR MpAxisBasic_1.Error THEN
                LastStep := RC_Step;
                RC_Step  := RC_ERROR;
            END_IF;
            
        RC_PROCESSING:
            IF MpAxisBasic_0.Error OR MpAxisBasic_1.Error THEN
                LastStep := RC_Step;
                RC_Step  := RC_ERROR;
            END_IF;
            
        RC_ERROR:
            ReadyMechanics := FALSE;
            
    END_CASE    
    
    ReadyToStart := ReadyMechanics AND ReadyPickReg AND ReadyPlaceReg AND ReadyPickCore;
    
    (* Call FBs *)
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


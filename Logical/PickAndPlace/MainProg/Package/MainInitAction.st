
ACTION MainInitAction: 

	MpPackMLCore_0.Enable := TRUE;
	MpPackMLMode_0.Enable := TRUE;
	MpDelta4Axis_0.Override := 100.0; 
	MpDelta4Axis_0.Enable := TRUE; 
	AxisParameters_0.Velocity := 50.0;
	AxisParameters_0.Acceleration := 20.0;
	AxisParameters_0.Deceleration := 20.0;
 
	AxisParameters_1.Velocity := 0.0;
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
	
	//Activate block and set first state to Stopping (important, )
	MpPackMLMode_0.Activate := TRUE;
	MpPackMLMode_0.Stop := TRUE;

END_ACTION

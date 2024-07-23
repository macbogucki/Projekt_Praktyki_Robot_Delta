
ACTION AxisConfigAction: 
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
END_ACTION

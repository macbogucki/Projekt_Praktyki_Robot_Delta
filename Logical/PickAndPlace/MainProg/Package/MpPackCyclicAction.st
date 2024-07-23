
ACTION MpPackCyclicAction: 
	MpPackMLCore_0.MpLink := ADR(gPackMLCore);
	MpPackMLMode_0.MpLink := ADR(gPackMLCore);
	MpPackMLMode_0.ModeID := 1;
	
	MpPackMLMode_0.StateComplete := FALSE;
END_ACTION

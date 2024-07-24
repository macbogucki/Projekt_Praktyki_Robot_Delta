
ACTION AbortingAction: 
	MpDelta4Axis_0.Power := FALSE;
	MpAxisBasic_0.Power := FALSE;
	ReadyMechanics := FALSE;
	AbortExecute := TRUE;
	CmdStart := FALSE;
	IF NOT MpDelta4Axis_0.PowerOn
		AND NOT MpAxisBasic_0.PowerOn THEN
		MpPackMLStateComplete(gPackMLCore,1);
	END_IF 
END_ACTION

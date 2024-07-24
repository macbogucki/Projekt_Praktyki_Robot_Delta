
PROGRAM _INIT
	(* Insert code here *)
	MpAlarmXCore_0.Enable := TRUE;
	MpAlarmXCore_0.MpLink := ADR(gAlarmXCore);
	MpAlarmXCore_0();
	
	MpAlarmXHistory_0.Enable := TRUE;
	MpAlarmXHistory_0.MpLink := ADR(gAlarmXCore);
	MpAlarmXHistory_0();
END_PROGRAM
 
PROGRAM _CYCLIC
	MpAlarmXCore_0.MpLink := ADR(gAlarmXCore);
	MpAlarmXHistory_0.MpLink := ADR(gAlarmXHistory);
	
	MpAlarmXCore_0();
	MpAlarmXHistory_0();
	
	IF ZmiennaTestowa THEN 
		MpAlarmXSet(MpLink := gAlarmXCore, Name :='TestowyAlarm');
	END_IF;
	
	
END_PROGRAM
 
PROGRAM _EXIT
	(* Insert code here *)
	MpAlarmXCore_0.Enable := FALSE;
	MpAlarmXCore_0();
	MpAlarmXHistory_0.Enable := FALSE;
	MpAlarmXHistory_0();
END_PROGRAM

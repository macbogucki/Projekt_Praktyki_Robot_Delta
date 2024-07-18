
PROGRAM _INIT
	(* Insert code here *)
	MpPackMLCore_0.Enable := TRUE;
	MpPackMLMode_0.Enable := TRUE;
END_PROGRAM

PROGRAM _CYCLIC
	(* Insert code here *)
	MpPackMLCore_0.MpLink := ADR(gPackMLCore);
	MpPackMLMode_0.MpLink := ADR(gPackMLCore);
	MpPackMLMode_0.ModeID := 1;
	
	CASE MpPackMLStateCurrent(gPackMLCore); OF
		
		  

	END_CASE;
	
	
	MpPackMLMode_0();
	MpPackMLCore_0();
END_PROGRAM

PROGRAM _EXIT
	(* Insert code here *)
	 
END_PROGRAM


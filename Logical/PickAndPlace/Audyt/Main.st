
PROGRAM _INIT
	(* Insert code here *)
	MpAuditTrail_0.Enable := TRUE;
END_PROGRAM

PROGRAM _CYCLIC
	MessageVar := "Audtyt start";
	(* Insert code here *)
	MpAuditTrail_0();
	MpAuditTrail_0.MpLink := ADR(gAuditTrail);
	MpAuditTrail_0.DeviceName := ADR('CF');
	IF Zmienna THEN
		MpAuditCustomEvent(gAuditTrail, TypeVar, MessageVar, CommentVar);
	END_IF;
END_PROGRAM

PROGRAM _EXIT
	(* Insert code here *)
	 
END_PROGRAM


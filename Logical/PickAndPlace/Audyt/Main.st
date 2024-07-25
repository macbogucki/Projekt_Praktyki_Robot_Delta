
PROGRAM _INIT
	(* Insert code here *)
	MpAuditTrail_0.Enable := TRUE;
	Logout := FALSE;
END_PROGRAM

PROGRAM _CYCLIC
	//Wiadomoœci do audytu
	MessageVarStart := "Uruchomiono uklad";
	MessageVarStop := "Zatrzymano prace ukladu";
	MessageVarLogin := "Zalogowano uzytkownia";
	MessageVarLoginFailed := "Logowanie nie powiodlo sie";
	MessageVarLogout := "Wylogowano uzytkownika";
	MessageVarManual := "Zmiana trybu pracy na Manualny";
	MessageVarAutomat := "Zmiana trybu pracy na Automatyczny";
	//Wywo³ywanie audytu
	MpAuditTrail_0();
	MpAuditTrail_0.MpLink := ADR(gAuditTrail);
	MpAuditTrail_0.DeviceName := ADR('CF');
	//Usuniêcie danych z audytu
	IF DeleteAudit THEN
		MpAuditClearBuffer(gAuditTrail);
		DeleteAudit := FALSE;
	END_IF;
	//Uruchomienie maszyny
	R_TRIG_0(CLK := CmdStart);
	IF R_TRIG_0.Q THEN
		MpAuditCustomEvent(gAuditTrail, TypeVar, MessageVarStart, CommentVar);
	END_IF;
	//Ausyt Stopu
	R_TRIG_1(CLK := StopExecute);
	IF R_TRIG_1.Q THEN
		MpAuditCustomEvent(gAuditTrail, TypeVar, MessageVarStop, CommentVar);
	END_IF;
	//Audyt zalogowania
	R_TRIG_2(CLK := Login);
	IF R_TRIG_2.Q THEN
		MpAuditCustomEvent(gAuditTrail, TypeVar, MessageVarLogin, CommentVar);
		Login := FALSE;
		Logout := FALSE;
	END_IF;
	//Audyt wylogowania
	R_TRIG_3(CLK := Logout);
	IF R_TRIG_3.Q THEN
		MpAuditCustomEvent(gAuditTrail, TypeVar, MessageVarLogout, CommentVar);
		Logout := FALSE;
	END_IF;
	//Audyt b³¹d logowania
	R_TRIG_4(CLK := LoginFailed);
	IF R_TRIG_4.Q THEN
		MpAuditCustomEvent(gAuditTrail, TypeVar, MessageVarLoginFailed, CommentVar);
		LoginFailed := FALSE;
	END_IF;
	//Audyt zmiany trybu pracy
	R_TRIG_5(CLK := gManualMode);
	IF R_TRIG_5.Q THEN
		MpAuditCustomEvent(gAuditTrail, TypeVar, MessageVarManual, CommentVar);
	END_IF;

	R_TRIG_6(CLK := NOT gManualMode);
	IF R_TRIG_6.Q THEN
		MpAuditCustomEvent(gAuditTrail, TypeVar, MessageVarAutomat, CommentVar);
	END_IF;

END_PROGRAM

PROGRAM _EXIT
	(* Insert code here *)
	 
END_PROGRAM


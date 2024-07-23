
PROGRAM _INIT
	
    PC_Step := PC_ENABLE_PICK_CORE;
    Gripper := FALSE;
	 
END_PROGRAM

PROGRAM _CYCLIC

	//IF NOT(gManualMode) THEN
	
    CASE PC_Step OF
        
        (* Enable the PickCore *)
		PC_ENABLE_PICK_CORE:
			MpPickCore_0.Enable := TRUE;
			IF NOT AbortExecute AND NOT StopExecute THEN
				PC_Step := PC_WAIT_ENABLE_PICK_CORE;
				StopExecutedPickCore := FALSE;
			END_IF
			
        PC_WAIT_ENABLE_PICK_CORE:
            IF MpPickCore_0.Active THEN
                PC_Step := PC_ENABLE_CORE_PROCESS;

			ELSIF MpPickCore_0.Error THEN
				LastStep := PC_Step;
                PC_Step  := PC_ERROR;

			END_IF;
        
        PC_ENABLE_CORE_PROCESS:
            MpPickCore_0.ProcessEnable := TRUE;
            PC_Step := PC_WAIT_ENABLE_CORE_PROCESS;
        
        PC_WAIT_ENABLE_CORE_PROCESS:
            IF MpPickCore_0.ProcessActive THEN
                PC_Step := PC_READY_TO_START;

            ELSIF MpPickCore_0.Error THEN
				LastStep := PC_Step;
                PC_Step  := PC_ERROR;

            END_IF
            
        PC_READY_TO_START:
            ReadyPickCore := TRUE;
            
            IF CmdStart THEN
                MpPickCore_0.Parameters.OperationMode := 'ConveyorToConveyor';  //ZMIENIONE NA CZAS TESTOW!!!!!!
			    MpPickCore_0.ProcessStart := TRUE;
                PC_Step := PC_WAIT_START_CORE_PROCESS;
            END_IF

        PC_WAIT_START_CORE_PROCESS:
			IF MpPickCore_0.ProcessRunning THEN
                PC_Step := PC_STARTED;

			ELSIF MpPickCore_0.Error THEN
				LastStep := PC_Step;
                PC_Step  := PC_ERROR;

			END_IF;
            
        PC_STARTED:
            (* Nothing to do here *)
            IF MpPickCore_0.Error THEN
				LastStep := PC_Step;
                PC_Step  := PC_ERROR;
			END_IF;
            
        PC_ERROR:
            Error := TRUE;
            ReadyPickCore := FALSE;
        
	END_CASE
	
	IF AbortExecute OR StopExecute THEN
		PC_Step := PC_ENABLE_PICK_CORE;
		ReadyPickCore := FALSE;
		StopExecutedPickCore := TRUE;
	END_IF
	
	IF ResetExecutePickCore THEN
		MpPickCore_0.ErrorReset := TRUE;
		PC_Step := PC_ENABLE_PICK_CORE;
		ResetExecutedPickCore := TRUE;
		Error := FALSE;
	ELSE
		MpPickCore_0.ErrorReset := FALSE;
	END_IF
	
    (* Call FBs *)
    MpPickCore_0.MpLink := ADR(gPickCore_1);
	MpPickCore_0();
		

	
	//ELSE MpPickCore_0.Enable := FALSE;
//	END_IF	
	 
END_PROGRAM




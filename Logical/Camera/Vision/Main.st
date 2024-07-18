
PROGRAM _INIT
	(* Insert code here *)

		//Config camera triggered by position of axis 
	AcquisitionParameters.StartPosition :=0;
	AcquisitionParameters.Period := 160;
	AcquisitionParameters.AcquisitionPositions[0] := 80;
	
	//advanced settings
	AdvancedParameters.DisableNegativeDirection := FALSE;
	AdvancedParameters.AddOutputCompensation :=0.5;
	AdvancedParameters.AddPositionCompensation:=0.5;
	
	ViAxisAcquisition_0.Update:=0;
	ViAxisAcquisition_0.MpLink:=ADR(gCamera);
	ViAxisAcquisition_0.Enable := TRUE;
	
	
	
	ViAxisAcquisition_0.AcquisitionParameters:= AcquisitionParameters;
	ViAxisAcquisition_0.AdvancedParameters := AdvancedParameters;
	MakingPhoto := ViAxisAcquisition_0.InOperation;
	
	//advanced settings
	
	

	//AdvancedParameters.
	
	ViAxisAcquisition_0();
	
END_PROGRAM

PROGRAM _CYCLIC
	(* Insert code here *)
	ViAxisAcquisition_0();
	IF ViAxisAcquisition_0.InOperation THEN
		MakingPhoto := 1;
		END_IF
	 
END_PROGRAM

PROGRAM _EXIT
	(* Insert code here *)
	 
END_PROGRAM

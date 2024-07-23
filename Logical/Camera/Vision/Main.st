
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
	
	ViAxisAcquisition_0.AcquisitionParameters:= AcquisitionParameters;
	ViAxisAcquisition_0.AdvancedParameters := AdvancedParameters;
	MakingPhoto := ViAxisAcquisition_0.InOperation;

	
	//advanced settings
	
	

	//AdvancedParameters.
	

	
END_PROGRAM

PROGRAM _CYCLIC
	(* Insert code here *)

	//Main acquisition
	IF Cam.Status.IsCameraReady AND gIsConvHomed THEN
		ViAxisAcquisition_0.Enable := TRUE;
		// Token pos
		IF Cam.Camera_Output.NumResults > 0 THEN
			//Token_X := 174 -(Cam.Camera_Output.PosMatchY*174*30)/2622400;
			//Token_Y := (Cam.Camera_Output.PosMatchX*313*15)/2622400;
			Token_X := 120 - (((Cam.Camera_Output.PosMatchX*313)/1.7/108000)-120);
			Token_Y := 165 - (((Cam.Camera_Output.PosMatchY*174)/195200)*1.83) + 60;
		END_IF
		
		//Token_X := (Cam.Camera_Output.PosMatchX*313)/108000;
		//Token_Y := (Cam.Camera_Output.PosMatchY*174)/195200;
	END_IF 
	
	// Measurements conversion
	
	// Token operations (sim creation; pos updater)
	
		
	ViAxisAcquisition_0();
	
END_PROGRAM

PROGRAM _EXIT
	(* Insert code here *)
	 
END_PROGRAM

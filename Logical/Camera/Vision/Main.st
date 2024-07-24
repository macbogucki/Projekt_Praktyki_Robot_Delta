
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
	gMakeToken:=0;
	IF Cam.Status.IsCameraReady AND gIsConvHomed THEN
		ViAxisAcquisition_0.Enable := TRUE;
		// Token pos
		IF Cam.Camera_Output.NumResults > 0 AND NOT(Cam.Camera_Output.PhotosNum=OldPhotosNum) THEN

			gToken_X := 120 - (((Cam.Camera_Output.PosMatchX*313)/1.7/108000)-120);
			gToken_Y := 165 - (((Cam.Camera_Output.PosMatchY*174)/195200)*1.83) + 60;
			gMakeToken:=1;
			
		END_IF
		OldPhotosNum:=Cam.Camera_Output.PhotosNum;

	END_IF 
	
	// Measurements conversion
	
	// Token operations (sim creation; pos updater)
	
		
	ViAxisAcquisition_0();
	
END_PROGRAM

PROGRAM _EXIT
	(* Insert code here *)
	 
END_PROGRAM

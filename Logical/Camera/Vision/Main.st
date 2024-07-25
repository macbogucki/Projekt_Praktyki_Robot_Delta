
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

	//Config img Acquisition
	ImageGetter.MpLink:= ADR(gCamera);
	ImageGetter.Buffer:=ADR(BufferForBinaryImageData);
	ImageGetter.BufferSize:= SIZEOF(BufferForBinaryImageData);
	ImageGetter.Type:= viBASE_IMAGE_TYPE_JPG;
	ImageGetter.QualityLevel:=10;

	//AdvancedParameters.
	
	Cam.Parameters.MinScore := 80;

	
END_PROGRAM

PROGRAM _CYCLIC
	(* Insert code here *)

	//Main acquisition
	gMakeToken:=0;
	IF Cam.Status.IsCameraReady AND gIsConvHomed THEN
		ViAxisAcquisition_0.Enable := TRUE;
		// Token pos
		IF EDGENEG(gIsCameraActive) THEN
		IF Cam.Camera_Output.NumResults > 0 THEN
			
			RotationPeriod :=360/ConvVelocityDegrees;
			gToken_X := 120 - (((Cam.Camera_Output.PosMatchX*313)/1.7/108000)-100);
			gToken_Y := 165 - (((Cam.Camera_Output.PosMatchY*174)/195200)*1.83) + 45+ ((UINT_TO_REAL(Cam.Camera_Output.ProcesingTime)/1000.0)*ConvVelocityDegrees) ;
			gMakeToken:=1;
			
			END_IF
			
			ImageGetter.Execute:=TRUE;

		END_IF


	END_IF 
	
	// Measurements conversion
	
	// Token operations (sim creation; pos updater)
	
	//GetImage
	IF EDGEPOS(ImageGetter.Done) THEN	
		strcpy(ADR(CameraImageURL),ADR('<image x=$'0$' y=$'0$' width=$'615px$' height=$'630px$' href=$'data:image/jpeg;base64,')); // Start of the image element with image dimensions as set in the vision application. 
		ImgTransfer.pDest :=ADR(BufferForBase64EncodedImageData);
		Buffersize := SIZEOF(BufferForBase64EncodedImageData);
		Bufferlen := strlen(ADR(BufferForBase64EncodedImageData));
		Stringlen := strlen(ADR('$' />'));
		ImgTransfer.destSize := Buffersize - Bufferlen - Stringlen;
		ImgTransfer.pSrc := ADR(BufferForBinaryImageData);
		ImgTransfer.srcLen := ImageGetter.BufferLen;
		ImgTransfer.enable := TRUE;
		ImgTransfer();
		
		strcat(ADR(CameraImageURL),ADR(BufferForBase64EncodedImageData));
		strcat(ADR(CameraImageURL),ADR('$' />')) ; // Completion of the image element
		
	END_IF
	
	IF ImageGetter.Done THEN
		ImageGetter.Execute := FALSE;
		END_IF
		
	ViAxisAcquisition_0();
	ImageGetter();
	
END_PROGRAM

PROGRAM _EXIT
	(* Insert code here *)
	 
END_PROGRAM

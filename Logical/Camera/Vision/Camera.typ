
TYPE
	Camera : 	STRUCT 
		Cmd : Cmd;
		Parameters : Parameters;
		Status : Status;
		Camera_Output : Camera_Output;
	END_STRUCT;
	Parameters : 	STRUCT 
		SetFocus : UINT := 45000;
		ExposureTime : UDINT := 10000;
		FlashColor : USINT := 99;
		FlashSegment : USINT := 15;
	END_STRUCT;
	Cmd : 	STRUCT 
		Trigger : BOOL;
		Enable_Matching : BOOL := 1;
	END_STRUCT;
	Status : 	STRUCT 
		AquisitionComplete : BOOL;
		IsCameraReady : BOOL;
	END_STRUCT;
	Camera_Output : 	STRUCT 
		PosMatchX : DINT;
		PosMatchY : DINT;
		NumResults : USINT;
		PhotosNum : USINT;
	END_STRUCT;
END_TYPE

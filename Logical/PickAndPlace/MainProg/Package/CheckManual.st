
ACTION CheckManualAction: 
	gIsConvHomed := MpDelta4Axis_0.IsHomed;
	gTcpPositionX := MpDelta4Axis_0.X;
	gTcpPositionY := MpDelta4Axis_0.Y;
	gTcpPositionZ := MpDelta4Axis_0.Z;
	
	IF gManualMode THEN
		DeltaParameters.Jog.Velocity[0] := DeltaParamConnections.Jog.Velocity[0];
		DeltaParameters.Jog.Velocity[1] := DeltaParamConnections.Jog.Velocity[1];
		DeltaParameters.Jog.Velocity[2] := DeltaParamConnections.Jog.Velocity[2];
		DeltaParameters.ManualMoveType := DeltaParamConnections.ManualMoveType;
		DeltaParameters.Jog.CoordSystem := DeltaParamConnections.Jog.CoordSystem;
		DeltaParameters.CoordSystem := DeltaParamConnections.CoordSystem;
		MpDelta4Axis_0.Enable := gMpDelta4AxisEnable;
		MpDelta4Axis_0.Jog := gMpDelta4AxisJog;
		
	END_IF
END_ACTION


PROGRAM _INIT
	(* Insert code here *)
	gManualMode := 0;
	gMpDelta4AxisJog := FALSE;	
	HomeX := 0;
	HomeY := 0;	
	HomeZ := 120;
	HomingVel := 10;
	HomingOffset := 2;
	
END_PROGRAM

PROGRAM _CYCLIC
	IF gManualMode THEN
			//zapisac jako akcje:
		DeltaParamConnections.Jog.Velocity[0] := 0;	
		DeltaParamConnections.Jog.Velocity[1] := 0;	
		DeltaParamConnections.Jog.Velocity[2] := 0;
		
		IF NOT isMove THEN
			ManualEnum := 8;
		END_IF;
			
		gMpDelta4AxisEnable := TRUE; 
		gMpDelta4AxisJog := TRUE;
		DeltaParamConnections.ManualMoveType := mcMOVE_RELATIVE;
		DeltaParamConnections.Jog.CoordSystem := mcTCS;
		DeltaParamConnections.CoordSystem := mcTCS;
		
		CASE ManualEnum OF
			HOMING: 
				gMpDelta4AxisJog := TRUE;
				IF gTcpPositionX - HomeX > HomingOffset THEN
					DeltaParamConnections.Jog.Velocity[0] := -HomingVel;	
				ELSIF HomeX - gTcpPositionX > HomingOffset THEN
					DeltaParamConnections.Jog.Velocity[0] := HomingVel;
				ELSIF gTcpPositionY - HomeY  > HomingOffset THEN
					DeltaParamConnections.Jog.Velocity[0] := 0;	
					DeltaParamConnections.Jog.Velocity[1] := -HomingVel;
				ELSIF HomeY - gTcpPositionY > HomingOffset THEN
					DeltaParamConnections.Jog.Velocity[1] := HomingVel;
				ELSIF gTcpPositionZ - HomeZ > HomingOffset THEN
					DeltaParamConnections.Jog.Velocity[1] := 0;	
					DeltaParamConnections.Jog.Velocity[2] := -HomingVel;
				ELSIF HomeZ - gTcpPositionZ > HomingOffset THEN
					DeltaParamConnections.Jog.Velocity[2] := HomingVel;		
				ELSE 
					DeltaParamConnections.Jog.Velocity[0] := 0;	
					DeltaParamConnections.Jog.Velocity[1] := 0;	
					DeltaParamConnections.Jog.Velocity[2] := 0;	
				END_IF
							
			XPOS: DeltaParamConnections.Jog.Velocity[0] := XVel;	
			XNEG: DeltaParamConnections.Jog.Velocity[0] := -XVel;	
			YPOS: DeltaParamConnections.Jog.Velocity[1] := YVel;
			YNEG: DeltaParamConnections.Jog.Velocity[1] := -YVel;
			ZPOS: DeltaParamConnections.Jog.Velocity[2] := ZVel;
			ZNEG: DeltaParamConnections.Jog.Velocity[2] := -ZVel;
			OTHER: gMpDelta4AxisJog := FALSE;
			END_CASE
		
END_IF
	 
			
END_PROGRAM


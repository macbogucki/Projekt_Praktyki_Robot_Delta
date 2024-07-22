
PROGRAM _INIT
	(* Insert code here *)
	gManualMode := 0;
	 
END_PROGRAM

PROGRAM _CYCLIC
	IF gManualMode THEN
		
		DeltaParameters.ManualMoveType := mcMOVE_RELATIVE;
		DeltaParameters.Jog.CoordSystem := mcTCS;
		DeltaParameters.CoordSystem := mcTCS;
		
		
		IF MoveXPos THEN
			MpDelta4AxisManual.Power := TRUE;
			DeltaParameters.Jog.Velocity[0] := XVel;
			
			//MpDelta4AxisManual.MoveLinear := TRUE;
			
			
		ELSIF MoveYPos THEN
			MpDelta4AxisManual.Power := TRUE;
			DeltaParameters.Jog.Velocity[1] := YVel;
			//DeltaParameters.Jog.CoordSystem := mcTCS;
		
		
		ELSIF MoveZPos THEN
			MpDelta4AxisManual.Power := TRUE;
			DeltaParameters.Jog.Velocity[2] := ZVel;
			//DeltaParameters.Jog.CoordSystem := mcTCS;
		END_IF
				
		
		
		
		
			
	
		
	END_IF	
	 
END_PROGRAM

PROGRAM _EXIT
	(* Insert code here *)
	 
END_PROGRAM


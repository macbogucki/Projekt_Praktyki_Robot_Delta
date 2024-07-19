
ACTION ActionReseting: 
	
	CASE RES_Step OF
		HOMING_DELTA:
			MpDelta4Axis_0.Home := TRUE;
			IF MpDelta4Axis_0.IsHomed THEN
				MpDelta4Axis_0.Home := FALSE;
				RES_Step := ACTIVATE_AXIS;
			END_IF
			
		ACTIVATE_AXIS:
			IF MpAxisBasic_0.Active THEN	
				MpAxisBasic_0.Power := TRUE;
				MpAxisBasic_1.Power := TRUE; // axis not used, do not worry
				IF MpAxisBasic_0.PowerOn THEN
					RES_Step := HOMING_AXIS; 
				END_IF
				
			END_IF
			
		HOMING_AXIS:
			IF MpAxisBasic_0.PowerOn THEN
				MpAxisBasic_0.Home := TRUE;
				MpAxisBasic_1.Home := TRUE; // axis not used, do not worry
			END_IF;
			IF MpAxisBasic_0.IsHomed THEN
				MpAxisBasic_0.Home := FALSE;
				MpAxisBasic_1.Home := FALSE; // axis not used, do not worry
				RES_Step := COMPLETE_STATE;
			END_IF
		COMPLETE_STATE:
			MpPackMLStateComplete(gPackMLCore,1);
				
		END_CASE; 
END_ACTION

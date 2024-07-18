
PROGRAM _MAIN          
	Feedrate(5000);   //move with reduced speed
	MoveJ(P1);        //move system to point P1
	MoveJ(P2);        //move system to point P2

	WaitTime(3);        //wait for 3 seconds

	MoveJ(P0);        //move back to origin position
	END_PROGRAM
PROGRAM _INIT
     
MpDelta4Axis_0.Enable := TRUE; 

MpDelta4Axis_0.Override := 100.0; 
DeltaParameters.ProgramName := 'Robotic.st';    //File stored on FileDevice

END_PROGRAM

PROGRAM _CYCLIC
gAxisQ1;
gAxisQ2;
gAxisQ3;
gAxisQ4;
MpDelta4Axis_0.MpLink := ADR(g4AxDeltaA);
MpDelta4Axis_0.Parameters := ADR(DeltaParameters); 
MpDelta4Axis_0();
     
END_PROGRAM



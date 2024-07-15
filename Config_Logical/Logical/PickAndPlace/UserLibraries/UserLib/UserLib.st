
FUNCTION DistanceOverPeriod
    (* 
       Assuming: 
       Pos1 = current belt position
       Pos2 = previous belt position
       Belt rotation is monodirectional
       
       a more computationally efficient implementation would be : DistanceOverPeriod := (Pos1 - Pos2) MOD Period;
       but, in this way, in case of Pos1 = Pos2 DistanceOverPeriod would be 0.

       With the following implementation instead, in case of Pos1 = Pos2, DistanceOverPeriod would be = Period.
       
       We prefer this implementation since we assume that in case of two equal positions, most likely, a full period was passed instead of no distance at all
    *)

    IF (Pos1 > Pos2) THEN
        DistanceOverPeriod := Pos1 - Pos2;
    ELSE 
        DistanceOverPeriod := Period - (Pos2 - Pos1);   
    END_IF  
      
    RETURN;

END_FUNCTION


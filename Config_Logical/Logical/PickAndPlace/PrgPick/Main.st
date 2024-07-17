
PROGRAM _INIT
    
    C_Step := C_WAIT_ENABLE;
    Error := FALSE;
    
    ProductSpacing := 120; // distance between two consecutive products
     
END_PROGRAM

PROGRAM _CYCLIC
    
    CASE C_Step OF
        C_WAIT_ENABLE:
            LastStep := C_WAIT_ENABLE;
            C_Step   := C_ENABLE_REGISTER_FB;
			
        (* Pick-and-Place register handling for Picking conveyor *)
        C_ENABLE_REGISTER_FB:
            MpPickRegister_0.Enable := TRUE;
            C_Step := C_WAIT_ENABLE_REGISTER_FB;		
			
        C_WAIT_ENABLE_REGISTER_FB:
            IF MpPickRegister_0.Active THEN				
                C_Step := C_ENABLE_REGISTER;
            ELSIF MpPickRegister_0.Error THEN
                LastStep := C_Step;
                C_Step   := C_ERROR;
            END_IF;
			
        C_ENABLE_REGISTER:
            MpPickRegister_0.RegisterEnable := TRUE;
            C_Step := C_WAIT_ENABLE_REGISTER;
			
        C_WAIT_ENABLE_REGISTER:
            IF MpPickRegister_0.RegisterActive THEN				
                C_Step := C_ENABLE_ADD_REGISTER_FBS;
            ELSIF MpPickRegister_0.Error THEN
                LastStep := C_Step;
                C_Step   := C_ERROR;
            END_IF;
			
        C_ENABLE_ADD_REGISTER_FBS:
            MpPickRegCreateProduct.Enable := TRUE;
            C_Step := C_WAIT_ENABLE_ADD_REGISTER_FBS;
			
        C_WAIT_ENABLE_ADD_REGISTER_FBS:
            IF MpPickRegCreateProduct.Active THEN				
                C_Step := C_WAIT_START_PROCESS;
            ELSIF MpPickRegCreateProduct.Error THEN
                LastStep := C_Step;
                C_Step   := C_ERROR;
            END_IF;
        
        C_WAIT_START_PROCESS: // waits user start command and conveyor moving
            ReadyPickReg := TRUE;
            IF CmdStart AND ReadyToStart AND (PickConveyorPosition > 0) THEN
                C_Step := C_PROCESSING;
            END_IF;
			
        C_PROCESSING: (* now create products on moving conveyor for picking *)
            
            ElapsedDistance := DistanceOverPeriod(PickConveyorPosition, LastProductConveyorPosition, PickConveyorLength);
            
            IF (ElapsedDistance >= ProductSpacing) THEN
                
                MpPickRegCreateProduct.Parameters.LatchedConveyor.Position:= PickConveyorPosition;			
                MpPickRegCreateProduct.Parameters.Mode := mpPICK_CREATE_SINGLEITEM;
                MpPickRegCreateProduct.Parameters.ObjectTypeName := 'MyProduct';
                MpPickRegCreateProduct.Parameters.Translation.X  := 0;                
                MpPickRegCreateProduct.Parameters.Translation.Y  := 125; // in the middle of conveyor width
                MpPickRegCreateProduct.Create := TRUE;
                
                LastProductConveyorPosition := MpPickRegCreateProduct.Parameters.LatchedConveyor.Position;
            ELSE
                MpPickRegCreateProduct.Create := FALSE;
            END_IF
			
            IF MpPickRegCreateProduct.Error THEN
                LastStep := C_Step;
                C_Step   := C_ERROR;
            END_IF;
			
        C_ERROR:
            Error := TRUE;
            ReadyPickReg := FALSE;

    END_CASE

    (* FB calls *)
    MpPickRegister_0.MpLink := ADR(gPickRegister);
    MpPickRegister_0();

    MpPickRegCreateProduct.MpLink := ADR(gPickRegister);
    MpPickRegCreateProduct();
     
END_PROGRAM

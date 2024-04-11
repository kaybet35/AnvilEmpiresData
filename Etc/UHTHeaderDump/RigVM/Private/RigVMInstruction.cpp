#include "RigVMInstruction.h"

FRigVMInstruction::FRigVMInstruction() {
    this->ByteCodeIndex = 0;
    this->OpCode = ERigVMOpCode::Execute_0_Operands;
    this->OperandAlignment = 0;
}


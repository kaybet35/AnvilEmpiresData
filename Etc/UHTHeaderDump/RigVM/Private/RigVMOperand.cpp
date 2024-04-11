#include "RigVMOperand.h"

FRigVMOperand::FRigVMOperand() {
    this->MemoryType = ERigVMMemoryType::Work;
    this->RegisterIndex = 0;
    this->RegisterOffset = 0;
}


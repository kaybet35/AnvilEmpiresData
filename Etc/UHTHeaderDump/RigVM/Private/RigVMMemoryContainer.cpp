#include "RigVMMemoryContainer.h"

FRigVMMemoryContainer::FRigVMMemoryContainer() {
    this->bUseNameMap = false;
    this->MemoryType = ERigVMMemoryType::Work;
    this->bEncounteredErrorDuringLoad = false;
}


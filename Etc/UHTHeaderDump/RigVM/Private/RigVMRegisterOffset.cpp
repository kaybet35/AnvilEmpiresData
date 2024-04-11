#include "RigVMRegisterOffset.h"

FRigVMRegisterOffset::FRigVMRegisterOffset() {
    this->Type = ERigVMRegisterType::Plain;
    this->ScriptStruct = NULL;
    this->ParentScriptStruct = NULL;
    this->ArrayIndex = 0;
    this->ElementSize = 0;
}


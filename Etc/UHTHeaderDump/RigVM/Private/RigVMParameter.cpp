#include "RigVMParameter.h"

FRigVMParameter::FRigVMParameter() {
    this->Type = ERigVMParameterType::Input;
    this->RegisterIndex = 0;
    this->ScriptStruct = NULL;
}


#include "RigVMRegister.h"

FRigVMRegister::FRigVMRegister() {
    this->Type = ERigVMRegisterType::Plain;
    this->ByteIndex = 0;
    this->ElementSize = 0;
    this->ElementCount = 0;
    this->SliceCount = 0;
    this->AlignmentBytes = 0;
    this->TrailingBytes = 0;
    this->ScriptStructIndex = 0;
    this->bIsArray = false;
    this->bIsDynamic = false;
}


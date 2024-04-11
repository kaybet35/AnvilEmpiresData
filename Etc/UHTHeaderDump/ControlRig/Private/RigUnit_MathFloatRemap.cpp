#include "RigUnit_MathFloatRemap.h"

FRigUnit_MathFloatRemap::FRigUnit_MathFloatRemap() {
    this->Value = 0.00f;
    this->SourceMinimum = 0.00f;
    this->SourceMaximum = 0.00f;
    this->TargetMinimum = 0.00f;
    this->TargetMaximum = 0.00f;
    this->bClamp = false;
    this->Result = 0.00f;
}


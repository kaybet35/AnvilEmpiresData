#include "RigUnit_FitChainToCurveItemArray.h"

FRigUnit_FitChainToCurveItemArray::FRigUnit_FitChainToCurveItemArray() {
    this->Alignment = EControlRigCurveAlignment::Front;
    this->Minimum = 0.00f;
    this->Maximum = 0.00f;
    this->SamplingPrecision = 0;
    this->RotationEaseType = EControlRigAnimEasingType::Linear;
    this->Weight = 0.00f;
    this->bPropagateToChildren = false;
}


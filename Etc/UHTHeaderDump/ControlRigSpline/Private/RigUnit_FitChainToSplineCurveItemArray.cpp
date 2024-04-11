#include "RigUnit_FitChainToSplineCurveItemArray.h"

FRigUnit_FitChainToSplineCurveItemArray::FRigUnit_FitChainToSplineCurveItemArray() {
    this->Alignment = EControlRigCurveAlignment::Front;
    this->Minimum = 0.00f;
    this->Maximum = 0.00f;
    this->SamplingPrecision = 0;
    this->RotationEaseType = EControlRigAnimEasingType::Linear;
    this->Weight = 0.00f;
    this->bPropagateToChildren = false;
}


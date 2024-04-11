#include "RigUnit_FitChainToCurvePerItem.h"

FRigUnit_FitChainToCurvePerItem::FRigUnit_FitChainToCurvePerItem() {
    this->Alignment = EControlRigCurveAlignment::Front;
    this->Minimum = 0.00f;
    this->Maximum = 0.00f;
    this->SamplingPrecision = 0;
    this->RotationEaseType = EControlRigAnimEasingType::Linear;
    this->Weight = 0.00f;
    this->bPropagateToChildren = false;
}


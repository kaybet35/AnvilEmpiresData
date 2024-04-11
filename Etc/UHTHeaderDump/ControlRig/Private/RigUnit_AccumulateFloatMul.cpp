#include "RigUnit_AccumulateFloatMul.h"

FRigUnit_AccumulateFloatMul::FRigUnit_AccumulateFloatMul() {
    this->Multiplier = 0.00f;
    this->InitialValue = 0.00f;
    this->bIntegrateDeltaTime = false;
    this->Result = 0.00f;
    this->AccumulatedValue = 0.00f;
}


#include "RigUnit_AccumulateFloatLerp.h"

FRigUnit_AccumulateFloatLerp::FRigUnit_AccumulateFloatLerp() {
    this->TargetValue = 0.00f;
    this->InitialValue = 0.00f;
    this->Blend = 0.00f;
    this->bIntegrateDeltaTime = false;
    this->Result = 0.00f;
    this->AccumulatedValue = 0.00f;
}


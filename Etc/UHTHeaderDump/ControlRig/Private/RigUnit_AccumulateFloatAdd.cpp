#include "RigUnit_AccumulateFloatAdd.h"

FRigUnit_AccumulateFloatAdd::FRigUnit_AccumulateFloatAdd() {
    this->Increment = 0.00f;
    this->InitialValue = 0.00f;
    this->bIntegrateDeltaTime = false;
    this->Result = 0.00f;
    this->AccumulatedValue = 0.00f;
}


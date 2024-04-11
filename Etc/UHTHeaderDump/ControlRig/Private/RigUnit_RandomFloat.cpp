#include "RigUnit_RandomFloat.h"

FRigUnit_RandomFloat::FRigUnit_RandomFloat() {
    this->Seed = 0;
    this->Minimum = 0.00f;
    this->Maximum = 0.00f;
    this->Duration = 0.00f;
    this->Result = 0.00f;
    this->LastResult = 0.00f;
    this->LastSeed = 0;
    this->BaseSeed = 0;
    this->TimeLeft = 0.00f;
}


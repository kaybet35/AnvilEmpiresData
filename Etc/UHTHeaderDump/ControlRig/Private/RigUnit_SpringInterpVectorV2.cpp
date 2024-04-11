#include "RigUnit_SpringInterpVectorV2.h"

FRigUnit_SpringInterpVectorV2::FRigUnit_SpringInterpVectorV2() {
    this->Strength = 0.00f;
    this->CriticalDamping = 0.00f;
    this->bUseCurrentInput = false;
    this->TargetVelocityAmount = 0.00f;
    this->bInitializeFromTarget = false;
}


#include "RigUnit_SpringInterpQuaternionV2.h"

FRigUnit_SpringInterpQuaternionV2::FRigUnit_SpringInterpQuaternionV2() {
    this->Strength = 0.00f;
    this->CriticalDamping = 0.00f;
    this->bUseCurrentInput = false;
    this->TargetVelocityAmount = 0.00f;
    this->bInitializeFromTarget = false;
}


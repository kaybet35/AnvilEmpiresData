#include "RigUnit_SpringInterpV2.h"

FRigUnit_SpringInterpV2::FRigUnit_SpringInterpV2() {
    this->Target = 0.00f;
    this->Strength = 0.00f;
    this->CriticalDamping = 0.00f;
    this->Force = 0.00f;
    this->bUseCurrentInput = false;
    this->Current = 0.00f;
    this->TargetVelocityAmount = 0.00f;
    this->bInitializeFromTarget = false;
    this->Result = 0.00f;
    this->Velocity = 0.00f;
    this->SimulatedResult = 0.00f;
}


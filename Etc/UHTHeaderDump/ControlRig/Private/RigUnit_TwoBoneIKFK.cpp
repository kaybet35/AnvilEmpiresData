#include "RigUnit_TwoBoneIKFK.h"

FRigUnit_TwoBoneIKFK::FRigUnit_TwoBoneIKFK() {
    this->Spin = 0.00f;
    this->IKBlend = 0.00f;
    this->PreviousFKIKBlend = 0.00f;
    this->StartJointIndex = 0;
    this->MidJointIndex = 0;
    this->EndJointIndex = 0;
    this->UpperLimbLength = 0.00f;
    this->LowerLimbLength = 0.00f;
}


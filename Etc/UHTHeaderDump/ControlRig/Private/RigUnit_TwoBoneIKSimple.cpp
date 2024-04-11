#include "RigUnit_TwoBoneIKSimple.h"

FRigUnit_TwoBoneIKSimple::FRigUnit_TwoBoneIKSimple() {
    this->SecondaryAxisWeight = 0.00f;
    this->PoleVectorKind = EControlRigVectorKind::Direction;
    this->bEnableStretch = false;
    this->StretchStartRatio = 0.00f;
    this->StretchMaximumRatio = 0.00f;
    this->Weight = 0.00f;
    this->BoneALength = 0.00f;
    this->BoneBLength = 0.00f;
    this->bPropagateToChildren = false;
}


#include "RigUnit_TwoBoneIKSimpleTransforms.h"

FRigUnit_TwoBoneIKSimpleTransforms::FRigUnit_TwoBoneIKSimpleTransforms() {
    this->SecondaryAxisWeight = 0.00f;
    this->bEnableStretch = false;
    this->StretchStartRatio = 0.00f;
    this->StretchMaximumRatio = 0.00f;
    this->BoneALength = 0.00f;
    this->BoneBLength = 0.00f;
}


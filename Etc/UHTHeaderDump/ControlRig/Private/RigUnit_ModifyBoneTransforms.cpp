#include "RigUnit_ModifyBoneTransforms.h"

FRigUnit_ModifyBoneTransforms::FRigUnit_ModifyBoneTransforms() {
    this->Weight = 0.00f;
    this->WeightMinimum = 0.00f;
    this->WeightMaximum = 0.00f;
    this->Mode = EControlRigModifyBoneMode::OverrideLocal;
}


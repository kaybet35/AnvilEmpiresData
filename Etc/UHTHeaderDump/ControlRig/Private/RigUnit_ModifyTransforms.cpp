#include "RigUnit_ModifyTransforms.h"

FRigUnit_ModifyTransforms::FRigUnit_ModifyTransforms() {
    this->Weight = 0.00f;
    this->WeightMinimum = 0.00f;
    this->WeightMaximum = 0.00f;
    this->Mode = EControlRigModifyBoneMode::OverrideLocal;
}


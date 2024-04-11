#include "RigUnit_AddBoneTransform.h"

FRigUnit_AddBoneTransform::FRigUnit_AddBoneTransform() {
    this->Weight = 0.00f;
    this->bPostMultiply = false;
    this->bPropagateToChildren = false;
}


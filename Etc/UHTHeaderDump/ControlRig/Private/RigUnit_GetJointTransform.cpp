#include "RigUnit_GetJointTransform.h"

FRigUnit_GetJointTransform::FRigUnit_GetJointTransform() {
    this->Type = ETransformGetterType::Initial;
    this->TransformSpace = ETransformSpaceMode::LocalSpace;
}


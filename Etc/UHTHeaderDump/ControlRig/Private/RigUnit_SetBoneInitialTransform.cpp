#include "RigUnit_SetBoneInitialTransform.h"

FRigUnit_SetBoneInitialTransform::FRigUnit_SetBoneInitialTransform() {
    this->Space = EBoneGetterSetterMode::LocalSpace;
    this->bPropagateToChildren = false;
}


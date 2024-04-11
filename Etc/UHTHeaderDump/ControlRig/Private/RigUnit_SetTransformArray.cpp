#include "RigUnit_SetTransformArray.h"

FRigUnit_SetTransformArray::FRigUnit_SetTransformArray() {
    this->Space = EBoneGetterSetterMode::LocalSpace;
    this->bInitial = false;
    this->Weight = 0.00f;
    this->bPropagateToChildren = false;
}


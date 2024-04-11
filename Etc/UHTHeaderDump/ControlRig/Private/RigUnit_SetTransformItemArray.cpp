#include "RigUnit_SetTransformItemArray.h"

FRigUnit_SetTransformItemArray::FRigUnit_SetTransformItemArray() {
    this->Space = EBoneGetterSetterMode::LocalSpace;
    this->bInitial = false;
    this->Weight = 0.00f;
    this->bPropagateToChildren = false;
}


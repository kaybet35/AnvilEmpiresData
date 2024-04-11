#include "RigUnit_GetTransformItemArray.h"

FRigUnit_GetTransformItemArray::FRigUnit_GetTransformItemArray() {
    this->Space = EBoneGetterSetterMode::LocalSpace;
    this->bInitial = false;
}


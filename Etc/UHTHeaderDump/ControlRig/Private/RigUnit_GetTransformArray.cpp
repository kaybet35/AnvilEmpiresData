#include "RigUnit_GetTransformArray.h"

FRigUnit_GetTransformArray::FRigUnit_GetTransformArray() {
    this->Space = EBoneGetterSetterMode::LocalSpace;
    this->bInitial = false;
}


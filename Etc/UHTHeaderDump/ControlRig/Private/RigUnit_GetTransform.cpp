#include "RigUnit_GetTransform.h"

FRigUnit_GetTransform::FRigUnit_GetTransform() {
    this->Space = EBoneGetterSetterMode::LocalSpace;
    this->bInitial = false;
}


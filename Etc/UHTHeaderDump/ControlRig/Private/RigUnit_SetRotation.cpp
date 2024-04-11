#include "RigUnit_SetRotation.h"

FRigUnit_SetRotation::FRigUnit_SetRotation() {
    this->Space = EBoneGetterSetterMode::LocalSpace;
    this->bInitial = false;
    this->Weight = 0.00f;
    this->bPropagateToChildren = false;
}


#include "RigUnit_SetScale.h"

FRigUnit_SetScale::FRigUnit_SetScale() {
    this->Space = EBoneGetterSetterMode::LocalSpace;
    this->bInitial = false;
    this->Weight = 0.00f;
    this->bPropagateToChildren = false;
}


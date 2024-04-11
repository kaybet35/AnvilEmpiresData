#include "RigUnit_TwistBonesPerItem.h"

FRigUnit_TwistBonesPerItem::FRigUnit_TwistBonesPerItem() {
    this->TwistEaseType = EControlRigAnimEasingType::Linear;
    this->Weight = 0.00f;
    this->bPropagateToChildren = false;
}


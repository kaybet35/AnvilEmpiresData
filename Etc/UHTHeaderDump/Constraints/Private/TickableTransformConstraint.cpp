#include "TickableTransformConstraint.h"

UTickableTransformConstraint::UTickableTransformConstraint() {
    this->ParentTRSHandle = NULL;
    this->ChildTRSHandle = NULL;
    this->bMaintainOffset = true;
    this->Weight = 1.00f;
    this->bDynamicOffset = false;
    this->Type = ETransformConstraintType::Parent;
}



#include "TickableLookAtConstraint.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimationCore -ObjectName=ETransformConstraintType -FallbackName=ETransformConstraintType

UTickableLookAtConstraint::UTickableLookAtConstraint() {
    this->bMaintainOffset = false;
    this->Type = ETransformConstraintType::LookAt;
}



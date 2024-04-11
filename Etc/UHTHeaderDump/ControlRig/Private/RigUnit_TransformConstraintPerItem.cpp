#include "RigUnit_TransformConstraintPerItem.h"

FRigUnit_TransformConstraintPerItem::FRigUnit_TransformConstraintPerItem() {
    this->BaseTransformSpace = ETransformSpaceMode::LocalSpace;
    this->bUseInitialTransforms = false;
}


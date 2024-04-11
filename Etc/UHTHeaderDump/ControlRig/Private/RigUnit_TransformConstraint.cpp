#include "RigUnit_TransformConstraint.h"

FRigUnit_TransformConstraint::FRigUnit_TransformConstraint() {
    this->BaseTransformSpace = ETransformSpaceMode::LocalSpace;
    this->bUseInitialTransforms = false;
}


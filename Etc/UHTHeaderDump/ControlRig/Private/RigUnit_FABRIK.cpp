#include "RigUnit_FABRIK.h"

FRigUnit_FABRIK::FRigUnit_FABRIK() {
    this->Precision = 0.00f;
    this->Weight = 0.00f;
    this->bPropagateToChildren = false;
    this->MaxIterations = 0;
    this->bSetEffectorTransform = false;
}


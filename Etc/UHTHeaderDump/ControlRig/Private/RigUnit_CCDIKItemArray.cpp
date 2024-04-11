#include "RigUnit_CCDIKItemArray.h"

FRigUnit_CCDIKItemArray::FRigUnit_CCDIKItemArray() {
    this->Precision = 0.00f;
    this->Weight = 0.00f;
    this->MaxIterations = 0;
    this->bStartFromTail = false;
    this->BaseRotationLimit = 0.00f;
    this->bPropagateToChildren = false;
}


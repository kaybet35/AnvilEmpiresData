#include "RigUnit_ApplyFK.h"

FRigUnit_ApplyFK::FRigUnit_ApplyFK() {
    this->ApplyTransformMode = EApplyTransformMode::Override;
    this->ApplyTransformSpace = ETransformSpaceMode::LocalSpace;
}


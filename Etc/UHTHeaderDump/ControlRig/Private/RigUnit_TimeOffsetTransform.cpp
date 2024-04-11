#include "RigUnit_TimeOffsetTransform.h"

FRigUnit_TimeOffsetTransform::FRigUnit_TimeOffsetTransform() {
    this->SecondsAgo = 0.00f;
    this->BufferSize = 0;
    this->TimeRange = 0.00f;
    this->LastInsertIndex = 0;
    this->UpperBound = 0;
}


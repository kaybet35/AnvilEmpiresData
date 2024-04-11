#include "RigUnit_TimeOffsetFloat.h"

FRigUnit_TimeOffsetFloat::FRigUnit_TimeOffsetFloat() {
    this->Value = 0.00f;
    this->SecondsAgo = 0.00f;
    this->BufferSize = 0;
    this->TimeRange = 0.00f;
    this->Result = 0.00f;
    this->LastInsertIndex = 0;
    this->UpperBound = 0;
}


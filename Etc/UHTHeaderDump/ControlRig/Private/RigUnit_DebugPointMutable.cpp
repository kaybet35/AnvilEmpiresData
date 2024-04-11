#include "RigUnit_DebugPointMutable.h"

FRigUnit_DebugPointMutable::FRigUnit_DebugPointMutable() {
    this->Mode = ERigUnitDebugPointMode::Point;
    this->Scale = 0.00f;
    this->Thickness = 0.00f;
    this->bEnabled = false;
}


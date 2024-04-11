#include "RigUnit_DebugPoint.h"

FRigUnit_DebugPoint::FRigUnit_DebugPoint() {
    this->Mode = ERigUnitDebugPointMode::Point;
    this->Scale = 0.00f;
    this->Thickness = 0.00f;
    this->bEnabled = false;
}


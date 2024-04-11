#include "RigUnit_DebugTransformMutable.h"

FRigUnit_DebugTransformMutable::FRigUnit_DebugTransformMutable() {
    this->Mode = ERigUnitDebugTransformMode::Point;
    this->Thickness = 0.00f;
    this->Scale = 0.00f;
    this->bEnabled = false;
}


#include "RigUnit_DebugTransformArrayMutable.h"

FRigUnit_DebugTransformArrayMutable::FRigUnit_DebugTransformArrayMutable() {
    this->Mode = ERigUnitDebugTransformMode::Point;
    this->Thickness = 0.00f;
    this->Scale = 0.00f;
    this->bEnabled = false;
}


#include "RigUnit_VisualDebugVector.h"

FRigUnit_VisualDebugVector::FRigUnit_VisualDebugVector() {
    this->bEnabled = false;
    this->Mode = ERigUnitVisualDebugPointMode::Point;
    this->Thickness = 0.00f;
    this->Scale = 0.00f;
}


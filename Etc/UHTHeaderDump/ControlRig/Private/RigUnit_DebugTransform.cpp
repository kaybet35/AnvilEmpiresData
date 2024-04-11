#include "RigUnit_DebugTransform.h"

FRigUnit_DebugTransform::FRigUnit_DebugTransform() {
    this->Mode = ERigUnitDebugTransformMode::Point;
    this->Thickness = 0.00f;
    this->Scale = 0.00f;
    this->bEnabled = false;
}


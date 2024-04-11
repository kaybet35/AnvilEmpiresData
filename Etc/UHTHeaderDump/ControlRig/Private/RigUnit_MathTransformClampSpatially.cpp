#include "RigUnit_MathTransformClampSpatially.h"

FRigUnit_MathTransformClampSpatially::FRigUnit_MathTransformClampSpatially() {
    this->Axis = EAxis::None;
    this->Type = EControlRigClampSpatialMode::Plane;
    this->Minimum = 0.00f;
    this->Maximum = 0.00f;
    this->bDrawDebug = false;
    this->DebugThickness = 0.00f;
}


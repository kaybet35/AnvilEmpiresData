#include "RigUnit_MathVectorClampSpatially.h"

FRigUnit_MathVectorClampSpatially::FRigUnit_MathVectorClampSpatially() {
    this->Axis = EAxis::None;
    this->Type = EControlRigClampSpatialMode::Plane;
    this->Minimum = 0.00f;
    this->Maximum = 0.00f;
    this->bDrawDebug = false;
    this->DebugThickness = 0.00f;
}


#include "RigUnit_ControlRigSplineFromPoints.h"

FRigUnit_ControlRigSplineFromPoints::FRigUnit_ControlRigSplineFromPoints() {
    this->SplineMode = ESplineType::BSpline;
    this->SamplesPerSegment = 0;
    this->Compression = 0.00f;
    this->Stretch = 0.00f;
}


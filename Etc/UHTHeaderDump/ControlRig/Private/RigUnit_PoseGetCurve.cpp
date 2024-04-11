#include "RigUnit_PoseGetCurve.h"

FRigUnit_PoseGetCurve::FRigUnit_PoseGetCurve() {
    this->Valid = false;
    this->CurveValue = 0.00f;
    this->CachedPoseElementIndex = 0;
    this->CachedPoseHash = 0;
}


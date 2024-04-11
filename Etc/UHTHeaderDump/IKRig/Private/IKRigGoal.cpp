#include "IKRigGoal.h"

FIKRigGoal::FIKRigGoal() {
    this->TransformSource = EIKRigGoalTransformSource::Manual;
    this->PositionAlpha = 0.00f;
    this->RotationAlpha = 0.00f;
    this->PositionSpace = EIKRigGoalSpace::Component;
    this->RotationSpace = EIKRigGoalSpace::Component;
}


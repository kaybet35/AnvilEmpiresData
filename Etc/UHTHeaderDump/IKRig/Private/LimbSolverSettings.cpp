#include "LimbSolverSettings.h"

FLimbSolverSettings::FLimbSolverSettings() {
    this->ReachPrecision = 0.00f;
    this->HingeRotationAxis = EAxis::None;
    this->MaxIterations = 0;
    this->bEnableLimit = false;
    this->MinRotationAngle = 0.00f;
    this->bAveragePull = false;
    this->PullDistribution = 0.00f;
    this->ReachStepAlpha = 0.00f;
    this->bEnableTwistCorrection = false;
    this->EndBoneForwardAxis = EAxis::None;
}


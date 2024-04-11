#include "IKRig_LimbSolver.h"
#include "IKRig_LimbEffector.h"

UIKRig_LimbSolver::UIKRig_LimbSolver() {
    this->ReachPrecision = 0.01f;
    this->HingeRotationAxis = EAxis::None;
    this->MaxIterations = 12;
    this->bEnableLimit = false;
    this->MinRotationAngle = 15.00f;
    this->bAveragePull = true;
    this->PullDistribution = 0.50f;
    this->ReachStepAlpha = 0.70f;
    this->bEnableTwistCorrection = false;
    this->EndBoneForwardAxis = EAxis::Y;
    this->Effector = CreateDefaultSubobject<UIKRig_LimbEffector>(TEXT("Effector"));
}



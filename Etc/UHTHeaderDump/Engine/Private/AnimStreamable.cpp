#include "AnimStreamable.h"

UAnimStreamable::UAnimStreamable() {
    this->NumberOfKeys = 0;
    this->Interpolation = EAnimInterpolationType::Linear;
    this->BoneCompressionSettings = NULL;
    this->CurveCompressionSettings = NULL;
    this->bEnableRootMotion = false;
    this->RootMotionRootLock = ERootMotionRootLock::RefPose;
    this->bForceRootLock = false;
    this->bUseNormalizedRootMotionScale = false;
}



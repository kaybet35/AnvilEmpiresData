#include "AnimSequence.h"

UAnimSequence::UAnimSequence() {
    this->BoneCompressionSettings = NULL;
    this->CurveCompressionSettings = NULL;
    this->AdditiveAnimType = AAT_None;
    this->RefPoseType = ABPT_None;
    this->RefFrameIndex = 0;
    this->RefPoseSeq = NULL;
    this->Interpolation = EAnimInterpolationType::Linear;
    this->bEnableRootMotion = false;
    this->RootMotionRootLock = ERootMotionRootLock::RefPose;
    this->bForceRootLock = false;
    this->bUseNormalizedRootMotionScale = true;
    this->bRootMotionSettingsCopiedFromMontage = false;
}



#include "AnimNode_ControlRig.h"

FAnimNode_ControlRig::FAnimNode_ControlRig() {
    this->ControlRigClass = NULL;
    this->ControlRig = NULL;
    this->Alpha = 0.00f;
    this->AlphaInputType = EAnimAlphaInputType::Float;
    this->bAlphaBoolEnabled = false;
    this->bSetRefPoseFromSkeleton = false;
    this->LODThreshold = 0;
}


#include "AnimNode_IKRig.h"

FAnimNode_IKRig::FAnimNode_IKRig() {
    this->RigDefinitionAsset = NULL;
    this->bStartFromRefPose = false;
    this->AlphaInputType = EAnimAlphaInputType::Float;
    this->bAlphaBoolEnabled = false;
    this->Alpha = 0.00f;
    this->IKRigProcessor = NULL;
    this->ActualAlpha = 0.00f;
}


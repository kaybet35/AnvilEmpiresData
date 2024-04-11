#include "AnimNode_BlendSpacePlayer_Standalone.h"

FAnimNode_BlendSpacePlayer_Standalone::FAnimNode_BlendSpacePlayer_Standalone() {
    this->GroupRole = EAnimGroupRole::CanBeLeader;
    this->Method = EAnimSyncMethod::DoNotSync;
    this->bIgnoreForRelevancyTest = false;
    this->X = 0.00f;
    this->Y = 0.00f;
    this->PlayRate = 0.00f;
    this->bLoop = false;
    this->bResetPlayTimeWhenBlendSpaceChanges = false;
    this->StartPosition = 0.00f;
    this->BlendSpace = NULL;
}


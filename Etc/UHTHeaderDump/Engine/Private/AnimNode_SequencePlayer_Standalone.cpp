#include "AnimNode_SequencePlayer_Standalone.h"

FAnimNode_SequencePlayer_Standalone::FAnimNode_SequencePlayer_Standalone() {
    this->GroupRole = EAnimGroupRole::CanBeLeader;
    this->Method = EAnimSyncMethod::DoNotSync;
    this->bIgnoreForRelevancyTest = false;
    this->Sequence = NULL;
    this->PlayRateBasis = 0.00f;
    this->PlayRate = 0.00f;
    this->StartPosition = 0.00f;
    this->bLoopAnimation = false;
    this->bStartFromMatchingPose = false;
}


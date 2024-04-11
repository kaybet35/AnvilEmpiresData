#include "AnimNode_BlendSpaceGraphBase.h"

FAnimNode_BlendSpaceGraphBase::FAnimNode_BlendSpaceGraphBase() {
    this->X = 0.00f;
    this->Y = 0.00f;
    this->GroupRole = EAnimGroupRole::CanBeLeader;
    this->BlendSpace = NULL;
}


#include "AnimationGroupReference.h"

FAnimationGroupReference::FAnimationGroupReference() {
    this->Method = EAnimSyncMethod::DoNotSync;
    this->GroupRole = EAnimGroupRole::CanBeLeader;
}


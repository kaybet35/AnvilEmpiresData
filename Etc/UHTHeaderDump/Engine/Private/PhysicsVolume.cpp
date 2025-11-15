#include "PhysicsVolume.h"

APhysicsVolume::APhysicsVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAlwaysRelevant = true;
    this->TerminalVelocity = 4000.00f;
    this->Priority = 0;
    this->FluidFriction = 0.30f;
    this->bWaterVolume = false;
    this->bPhysicsOnContact = false;
}



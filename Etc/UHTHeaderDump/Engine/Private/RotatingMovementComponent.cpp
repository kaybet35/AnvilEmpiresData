#include "RotatingMovementComponent.h"

URotatingMovementComponent::URotatingMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoRegisterPhysicsVolumeUpdates = false;
    this->bRotationInLocalSpace = true;
}



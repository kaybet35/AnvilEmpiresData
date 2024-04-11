#include "ArchVisCharMovementComponent.h"

UArchVisCharMovementComponent::UArchVisCharMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MinPitch = -85.00f;
    this->MaxPitch = 85.00f;
    this->WalkingFriction = 4.00f;
    this->WalkingSpeed = 165.00f;
    this->WalkingAcceleration = 500.00f;
}



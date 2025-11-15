#include "NavMovementComponent.h"

UNavMovementComponent::UNavMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bComponentShouldUpdatePhysicsVolume = true;
    this->FixedPathBrakingDistance = 0.00f;
    this->bUpdateNavAgentWithOwnersCollision = true;
    this->bUseAccelerationForPaths = false;
    this->bUseFixedBrakingDistanceForPaths = false;
    this->PathFollowingComp = NULL;
}

void UNavMovementComponent::StopMovementKeepPathing() {
}

void UNavMovementComponent::StopActiveMovement() {
}

bool UNavMovementComponent::IsSwimming() const {
    return false;
}

bool UNavMovementComponent::IsMovingOnGround() const {
    return false;
}

bool UNavMovementComponent::IsFlying() const {
    return false;
}

bool UNavMovementComponent::IsFalling() const {
    return false;
}

bool UNavMovementComponent::IsCrouching() const {
    return false;
}



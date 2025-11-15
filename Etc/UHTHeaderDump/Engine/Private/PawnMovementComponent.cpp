#include "PawnMovementComponent.h"

UPawnMovementComponent::UPawnMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PawnOwner = NULL;
}

bool UPawnMovementComponent::IsMoveInputIgnored() const {
    return false;
}

FVector UPawnMovementComponent::GetPendingInputVector() const {
    return FVector{};
}

APawn* UPawnMovementComponent::GetPawnOwner() const {
    return NULL;
}

FVector UPawnMovementComponent::GetLastInputVector() const {
    return FVector{};
}

FVector UPawnMovementComponent::ConsumeInputVector() {
    return FVector{};
}

void UPawnMovementComponent::AddInputVector(FVector WorldVector, bool bForce) {
}



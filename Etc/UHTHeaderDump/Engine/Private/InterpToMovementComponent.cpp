#include "InterpToMovementComponent.h"

UInterpToMovementComponent::UInterpToMovementComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoRegisterPhysicsVolumeUpdates = false;
    this->Duration = 1.00f;
    this->bPauseOnImpact = false;
    this->bSweep = true;
    this->TeleportType = ETeleportType::None;
    this->BehaviourType = EInterpToBehaviourType::OneShot;
    this->bCheckIfStillInWorld = true;
    this->bForceSubStepping = false;
    this->MaxSimulationTimeStep = 0.05f;
    this->MaxSimulationIterations = 8;
}

void UInterpToMovementComponent::StopSimulating(const FHitResult& HitResult) {
}

void UInterpToMovementComponent::RestartMovement(float InitialDirection) {
}

void UInterpToMovementComponent::ResetControlPoints() {
}

void UInterpToMovementComponent::FinaliseControlPoints() {
}

void UInterpToMovementComponent::AddControlPointPosition(FVector Pos, bool bPositionIsRelative) {
}



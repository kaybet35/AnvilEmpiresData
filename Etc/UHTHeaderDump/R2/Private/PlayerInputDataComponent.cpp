#include "PlayerInputDataComponent.h"

UPlayerInputDataComponent::UPlayerInputDataComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InputMode = EAnvilPlayerInputMode::Default;
    this->AimMeshType = EAnvilPlayerAimMeshType::None;
    this->AimArcRotation = 0.00f;
    this->AimArcA = 0.00f;
    this->AimArcX0 = 0.00f;
    this->AimArcGroundHitDistance = 0.00f;
    this->AimArcCollisionDistance = 0.00f;
    this->MinRangedDistance = 0.00f;
    this->CurrentCollectableResourceType = 0;
    this->UsePrompt = 0;
    this->VehicleInput = EAnvilVehicleInputState::Idle;
}



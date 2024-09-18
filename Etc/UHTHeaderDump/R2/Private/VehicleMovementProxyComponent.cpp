#include "VehicleMovementProxyComponent.h"

UVehicleMovementProxyComponent::UVehicleMovementProxyComponent() {
    this->Acceleration = 0.00f;
    this->MaxVelocity = 0.00f;
    this->RotationalSpeed = 0.00f;
    this->SprintFactor = 1.00f;
    this->SprintRotationalSpeedFactor = 1.00f;
    this->SprintStaminaDrain = 15.00f;
    this->WalkStaminaDrain = 0.00f;
    this->RoadFactor = 1.00f;
    this->bGroupVehicle = false;
    this->bYawInPlace = false;
    this->bLadderMovement = false;
    this->bCanWorldEntranceTravel = false;
    this->CollisionEffect = NULL;
    this->RammingDamage = 480.00f;
    this->RammingVelocityFactor = 0.00f;
    this->RammingDamageType = EAnvilDamageType::Default;
    this->RammingStabilityDamage = 0.00f;
    this->RammingStabilitySplashDamage = 0.00f;
    this->RammingStabilitySplashDamageRadius = 0.00f;
    this->bDoAxleRaycasts = true;
    this->bWaterVehicle = false;
    this->bUsePitch = true;
}



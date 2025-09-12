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
    this->bWaterVehicle = false;
    this->bSailBoat = false;
    this->bDoAxleRaycasts = true;
    this->bAllowSwitchSeat = false;
    this->bUsePitch = true;
    this->bCanBeMovementBase = false;
    this->bRammingForceKillPlayer = false;
    this->bRammingAllowFriendlyFire = false;
    this->bCanBreachGates = false;
    this->MovementPlayerInteraction = EAnvilVehicleMovementPlayerInteractionType::Ignore;
    this->CollisionEffect = NULL;
    this->RammingVelocityTime = 0.00f;
    this->RammingDamageType = EAnvilDamageType::Default;
    this->RammingStabilityDamage = 0.00f;
    this->RammingStabilitySplashDamage = 0.00f;
    this->RammingStabilitySplashDamageRadius = 0.00f;
    this->RamCD = 1.00f;
    this->MaxSubmersionDepth = 0.80f;
}



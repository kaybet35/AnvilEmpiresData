#include "VehicleSeatProxyComponent.h"

UVehicleSeatProxyComponent::UVehicleSeatProxyComponent() {
    this->MountedStance = EAnvilCharacterStance::Standing;
    this->TargetArea = EAnvilTargetAreaType::None;
    this->DismountMaxDelta = 150.00f;
    this->bIsDriver = false;
    this->bIsLeft = false;
    this->bSeatThrustInput = false;
    this->bEngineThrustInput = false;
    this->bRudderRotationInput = false;
    this->bUseMountedWeapon = false;
    this->bPrimeMountedWeapon = false;
    this->bUseDeployable = false;
    this->bMustNearExitToMount = false;
    this->bRevertRequiredEquipments = false;
    this->bMirrorDetachLocation = false;
    this->AnimationIndex = 0;
    this->MountedAttackDamageMultiplier = 1.00f;
}



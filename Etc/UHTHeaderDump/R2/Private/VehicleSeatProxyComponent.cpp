#include "VehicleSeatProxyComponent.h"

UVehicleSeatProxyComponent::UVehicleSeatProxyComponent() {
    this->MountedStance = EAnvilCharacterStance::Standing;
    this->bIsDriver = false;
    this->bIsLeft = false;
    this->bUseMountedWeapon = false;
    this->bUseDeployable = false;
    this->bMustNearExitToMount = false;
    this->bRevertRequiredEquipments = false;
    this->AnimationIndex = 0;
    this->MountedAttackDamageMultiplier = 1.00f;
}



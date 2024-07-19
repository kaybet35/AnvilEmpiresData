#include "MountedWeaponDataComponent.h"

UMountedWeaponDataComponent::UMountedWeaponDataComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bPriming = false;
    this->bPrimed = false;
    this->bLoaded = false;
    this->bFiring = false;
    this->AimYaw = 0.00f;
    this->AimPitch = 0.00f;
}



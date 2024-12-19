#include "MountedWeaponProxyComponent.h"

UMountedWeaponProxyComponent::UMountedWeaponProxyComponent() {
    this->bHighArc = false;
    this->bFixedAim = false;
    this->bRequirePrimedLoad = false;
    this->bShowAimMesh = true;
    this->PrimingTime = 0.00f;
    this->Weapon = NULL;
}



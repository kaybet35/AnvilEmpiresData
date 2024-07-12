#include "ProjectileMovementProxyComponent.h"

UProjectileMovementProxyComponent::UProjectileMovementProxyComponent() {
    this->PickupEntity = NULL;
    this->PickupSpawnRate = 1.00f;
    this->HitEffect = NULL;
    this->GroundPatch = NULL;
    this->Speed = 0.00f;
    this->MaxRange = 100000.00f;
    this->BleedDamagePerSec = 0.00f;
    this->BleedTime = 0.00f;
    this->DamageAmount = 0;
    this->DamageType = EAnvilDamageType::Default;
    this->Radius = 0.00f;
    this->HeadingTolerance = 0.00f;
    this->NozzleYawDelta = 45.00f;
    this->NozzlePitchMin = -90.00f;
    this->NozzlePitchMax = 90.00f;
    this->RotationSpeed = 10000.00f;
    this->ScorchAmount = 0.00f;
    this->DislodgeRate = 0.00f;
    this->Lifetime = 3.50f;
    this->RandomRadius = 0.00f;
}



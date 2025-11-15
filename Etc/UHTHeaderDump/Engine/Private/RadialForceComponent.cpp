#include "RadialForceComponent.h"

URadialForceComponent::URadialForceComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->Radius = 200.00f;
    this->Falloff = RIF_Constant;
    this->ImpulseStrength = 1000.00f;
    this->bImpulseVelChange = false;
    this->bIgnoreOwningActor = false;
    this->ForceStrength = 10.00f;
    this->DestructibleDamage = 0.00f;
    this->ObjectTypesToAffect.AddDefaulted(4);
}

void URadialForceComponent::RemoveObjectTypeToAffect(TEnumAsByte<EObjectTypeQuery> ObjectType) {
}

void URadialForceComponent::FireImpulse() {
}

void URadialForceComponent::AddObjectTypeToAffect(TEnumAsByte<EObjectTypeQuery> ObjectType) {
}



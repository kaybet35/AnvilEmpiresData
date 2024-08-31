#include "PassiveDamageProxyComponent.h"

UPassiveDamageProxyComponent::UPassiveDamageProxyComponent() {
    this->Damage = 0.00f;
    this->Frequency = 0.00f;
    this->DamageType = EAnvilDamageType::Default;
}



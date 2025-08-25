#include "HealthProxyComponent.h"

UHealthProxyComponent::UHealthProxyComponent() {
    this->MaxHealth = 100.00f;
    this->Lifetime = 0.00f;
    this->AutoRegenRate = 0.00f;
    this->AutoRegenStartDelay = 0.00f;
    this->HitEffect = NULL;
    this->TargetType = EAnvilDamageTargetType::Default;
    this->TargetArea = EAnvilTargetAreaType::Main;
    this->VisualBloodAmountRecoveryRate = 0.01f;
    this->AttackerVisualBloodAmountRatio = 0.50f;
    this->AttackerVisualBloodAmountMax = 0.50f;
}



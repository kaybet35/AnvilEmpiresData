#include "AnimalAttackProxyComponent.h"

UAnimalAttackProxyComponent::UAnimalAttackProxyComponent() {
    this->OnRoadVisionRange = 500.00f;
    this->PosturingHoldDist = 500.00f;
    this->PosturingAggroDist = 200.00f;
    this->PosturingDuration = 0.00f;
    this->ChaseDuration = 0.00f;
    this->ChaseCooldown = 5.00f;
    this->AttackRadius = 150.00f;
    this->AttackFrequency = 2.00f;
    this->AttackDelay = 0.20f;
    this->MinNumAttacks = 0;
    this->MaxNumAttacks = 0;
    this->AttackDamage = 0;
    this->AttackDamageType = EAnvilDamageType::Slashing;
    this->bDoesFirstAttackFail = false;
}



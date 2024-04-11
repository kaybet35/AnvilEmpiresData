#include "PlayerSpawnerProxyComponent.h"

UPlayerSpawnerProxyComponent::UPlayerSpawnerProxyComponent() {
    this->Type = EAnvilSpawnType::Starter;
    this->SpawnRadius = 0.00f;
    this->Faction = EAnvilFactionId::None;
}



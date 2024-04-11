#include "PlayerSpawnerDataComponent.h"

UPlayerSpawnerDataComponent::UPlayerSpawnerDataComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Type = EAnvilSpawnType::Starter;
    this->Faction = EAnvilFactionId::None;
}



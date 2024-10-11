#include "ResourceSpawnerProxyComponent.h"

UResourceSpawnerProxyComponent::UResourceSpawnerProxyComponent() {
    this->SpawnedResource = NULL;
    this->SpawnRadius = 0.00f;
    this->MinimumSpawnRadius = 0.00f;
    this->SpawnInterval = 60.00f;
    this->SpawnQuantity = 0;
    this->SpawnWaveCountMultiplier = 1.00f;
    this->MaxSpawn = 0;
    this->GlobalMaxSpawn = 0;
    this->ResourceReserveInitial = 0;
    this->ReserveReplenishTimeSecs = 0;
    this->SpawnDelayAfterResourceDepleted = 0.00f;
    this->MinDistanceBetweenSpawns = 0.00f;
    this->bWaterOnly = false;
    this->bRequiresNavmesh = false;
    this->bTrackSpawnedEntity = false;
    this->bDontSpawnInSettlements = false;
    this->bIsRare = false;
    this->bDontSpawnNearPlayers = false;
    this->bWalkBackToSpawner = false;
    this->CompatibleSurfaceTypes = 0;
}



#include "ExplorationSpawnedEntityInfo.h"

FExplorationSpawnedEntityInfo::FExplorationSpawnedEntityInfo() {
    this->SpawnedEntity = NULL;
    this->SpawnedEntityVisVar = 0;
    this->MinDistFromFamilyArea = 0.00f;
    this->ChanceToSpawnPerMin = 0.00f;
    this->MinDistanceBetweenSpawns = 0.00f;
    this->SpawnSeasonStart = 0.00f;
    this->SpawnSeasonStop = 0.00f;
    this->MaxNumInRadius = 0;
    this->bRequiresNavmesh = false;
    this->bConsiderAllFamilyAreas = false;
    this->bDontSpawnInSettlements = false;
    this->bDoExpensiveForbiddenSurfaceCheck = false;
    this->CompatibleSurfaceTypes = 0;
    this->ForbiddenSurfaceTypes = 0;
}


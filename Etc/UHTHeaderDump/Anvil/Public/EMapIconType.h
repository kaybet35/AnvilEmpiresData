#pragma once
#include "CoreMinimal.h"
#include "EMapIconType.generated.h"

UENUM(BlueprintType)
enum class EMapIconType : uint8 {
    None,
    Player,
    DeathMarker,
    Spawner,
    MinorStructure,
    MediumStructure,
    MajorStructure,
    TownCenter,
    CampTownCenter,
    WildSpawnPoint,
    MinorLocation,
    MajorLocation,
    MarketShop,
    Mine,
    MapPost,
    BeaconTower,
    BeaconTowerPlayerInfo,
    FamilyMarker,
};


#pragma once
#include "CoreMinimal.h"
#include "EAnvilWorldEntityType.generated.h"

UENUM(BlueprintType)
enum class EAnvilWorldEntityType : uint8 {
    None,
    WildSpawn,
    TownHall,
    LargeCamp,
    SmallCamp,
    MarketShop,
    BeaconTower,
    NumTypes,
};


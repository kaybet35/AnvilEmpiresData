#pragma once
#include "CoreMinimal.h"
#include "EAnvilBeaconInfoType.generated.h"

UENUM(BlueprintType)
enum class EAnvilBeaconInfoType : uint8 {
    None,
    Player,
    FamilyCenter,
    BeaconTower,
    NumTypes,
};


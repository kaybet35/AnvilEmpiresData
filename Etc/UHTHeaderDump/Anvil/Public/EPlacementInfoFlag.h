#pragma once
#include "CoreMinimal.h"
#include "EPlacementInfoFlag.generated.h"

UENUM(BlueprintType)
enum class EPlacementInfoFlag : uint8 {
    ContextNone,
    InRichSoil,
    BeaconTowerLink,
    BeaconTowerTownHallLink,
    RareFoodArea_Begin,
    InRareFoodArea_Deer,
    InRareFoodArea_Boar,
    InRareFoodArea_Wheat,
    InRareFoodArea_Cabbage,
    InRareFoodArea_Coal,
    InRareFoodArea_Clay,
    InRareFoodArea_None,
    RareFoodArea_End,
    ContextEnd,
};


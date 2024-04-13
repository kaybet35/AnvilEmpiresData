#pragma once
#include "CoreMinimal.h"
#include "EAnvilPlacementInfoFlag.generated.h"

UENUM(BlueprintType)
enum class EAnvilPlacementInfoFlag : uint8 {
    ContextNone,
    InRichSoil,
    BeaconTowerLink,
    BeaconTowerTownHallLink,
    InFamilyArea,
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


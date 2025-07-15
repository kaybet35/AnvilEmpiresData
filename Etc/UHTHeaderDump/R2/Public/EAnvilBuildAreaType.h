#pragma once
#include "CoreMinimal.h"
#include "EAnvilBuildAreaType.generated.h"

UENUM(BlueprintType)
enum class EAnvilBuildAreaType : uint8 {
    TownArea,
    FortressArea,
    SmallCampArea,
    LargeCampArea,
    HomesteadArea,
    UndergroundArea,
    WildernessArea,
    NumTypes,
};


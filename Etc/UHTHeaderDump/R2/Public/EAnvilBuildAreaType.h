#pragma once
#include "CoreMinimal.h"
#include "EAnvilBuildAreaType.generated.h"

UENUM(BlueprintType)
enum class EAnvilBuildAreaType : uint8 {
    TownArea,
    SmallCampArea,
    LargeCampArea,
    HomesteadArea,
    UndergroundArea,
    WildernessArea,
    NumTypes,
};


#pragma once
#include "CoreMinimal.h"
#include "EAnvilPlacementArea.generated.h"

UENUM(BlueprintType)
enum class EAnvilPlacementArea : uint8 {
    Anywhere,
    TownArea,
    CampArea,
    HomesteadArea,
    NumTypes,
};


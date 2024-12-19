#pragma once
#include "CoreMinimal.h"
#include "EAnvilBuildLocationType.generated.h"

UENUM(BlueprintType)
enum class EAnvilBuildLocationType : uint8 {
    Foundation,
    Landscape,
    LargeRock,
    Water,
    _Unused,
    _Unused_1,
    Static,
    Shore,
    Deployed,
    AdditionalCollisionAllowWater,
    NumTypes,
};


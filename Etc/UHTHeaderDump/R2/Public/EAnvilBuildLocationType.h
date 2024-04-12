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
    Marketplace,
    Industry,
    Shore,
    UnderFoundationCeiling,
    AdditionalCollisionAllowWater,
    Deployed,
    Stable,
    Static,
};


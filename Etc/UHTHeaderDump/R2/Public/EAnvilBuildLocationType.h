#pragma once
#include "CoreMinimal.h"
#include "EAnvilBuildLocationType.generated.h"

UENUM(BlueprintType)
enum class EAnvilBuildLocationType : uint8 {
    Everywhere,
    Foundation,
    Landscape,
    LargeRock,
    Foundation_Landscape,
    Foundation_LargeRock,
    Landscape_LargeRock,
    Marketplace,
    Shore,
    UnderFoundationCeiling,
    _EndDirectBuildable,
    Deployed,
    Stable,
    Static,
    Count,
};


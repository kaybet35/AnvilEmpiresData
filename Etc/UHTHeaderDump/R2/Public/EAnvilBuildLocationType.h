#pragma once
#include "CoreMinimal.h"
#include "EAnvilBuildLocationType.generated.h"

UENUM(BlueprintType)
enum class EAnvilBuildLocationType : uint8 {
    Foundation,
    Landscape,
    LargeRock,
    Water,
    _BeginRequirements,
    Marketplace,
    Industry,
    Shore,
    UnderFoundationCeiling,
    _BeingNotDirectBuildable,
    Deployed,
    Stable,
    Static,
    _Count,
};


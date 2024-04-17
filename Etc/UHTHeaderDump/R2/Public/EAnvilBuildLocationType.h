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
    RequresCeiling,
    AdditionalCollisionAllowWater,
    Deployed,
    Stable,
    FamilyArea,
    Static,
    House,
    RequiresEnclosure,
    OutsideTownArea,
    TownArea,
    TownAreaOnly,
    NumTypes,
};


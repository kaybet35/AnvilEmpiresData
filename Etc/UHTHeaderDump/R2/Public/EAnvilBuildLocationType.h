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
    OutsideInitialTownArea,
    TownArea,
    TownAreaOnly,
    NumTypes,
};


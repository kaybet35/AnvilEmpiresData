#pragma once
#include "CoreMinimal.h"
#include "EBuildSiteCategory.generated.h"

UENUM(BlueprintType)
enum class EBuildSiteCategory : uint8 {
    Settlement,
    Housing,
    Camp,
    Defenses,
    Foundations,
    Industry,
    Water,
    Smithing,
    Cooking,
    Vehicles,
    Farming,
    Lumber,
    Stone,
    NumTypes,
};


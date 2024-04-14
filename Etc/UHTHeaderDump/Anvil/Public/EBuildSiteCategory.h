#pragma once
#include "CoreMinimal.h"
#include "EBuildSiteCategory.generated.h"

UENUM(BlueprintType)
enum class EBuildSiteCategory : uint8 {
    General,
    Housing,
    Cooking,
    Defenses,
    Vehicles,
    Lumber,
    Smithing,
    Stone,
    Farming,
    Water,
    Industry,
    Settlement,
    Foundations,
    Camp,
    NumTypes,
};


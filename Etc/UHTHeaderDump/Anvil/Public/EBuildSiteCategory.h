#pragma once
#include "CoreMinimal.h"
#include "EBuildSiteCategory.generated.h"

UENUM(BlueprintType)
enum class EBuildSiteCategory : uint8 {
    General,
    Family,
    Cooking,
    Defenses,
    Vehicles,
    Water,
    Industry,
    Settlement,
    Camp,
    NumTypes,
};


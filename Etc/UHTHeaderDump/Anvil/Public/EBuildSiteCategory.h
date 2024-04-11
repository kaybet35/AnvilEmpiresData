#pragma once
#include "CoreMinimal.h"
#include "EBuildSiteCategory.generated.h"

UENUM(BlueprintType)
enum class EBuildSiteCategory : uint8 {
    Settlement,
    Camp,
    Defenses,
    Foundations,
    Industry,
    Water,
    Smithing,
    NumTypes,
};


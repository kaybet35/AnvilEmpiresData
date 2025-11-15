#pragma once
#include "CoreMinimal.h"
#include "EOccludedGeometryFilteringPolicy.generated.h"

UENUM(BlueprintType)
enum class EOccludedGeometryFilteringPolicy : uint8 {
    NoOcclusionFiltering,
    VisibilityBasedFiltering,
};


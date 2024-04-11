#pragma once
#include "CoreMinimal.h"
#include "EConvexOverlapRemoval.generated.h"

UENUM(BlueprintType)
enum class EConvexOverlapRemoval : uint8 {
    None,
    All,
    OnlyClusters,
    OnlyClustersVsClusters,
};


#pragma once
#include "CoreMinimal.h"
#include "EChaosRemovalSortMethod.generated.h"

UENUM(BlueprintType)
enum class EChaosRemovalSortMethod : uint8 {
    SortNone,
    SortByHighestMass,
    SortByNearestFirst,
    Count,
};


#pragma once
#include "CoreMinimal.h"
#include "EWorldPartitionRuntimeCellState.generated.h"

UENUM(BlueprintType)
enum class EWorldPartitionRuntimeCellState : uint8 {
    Unloaded,
    Loaded,
    Activated,
};


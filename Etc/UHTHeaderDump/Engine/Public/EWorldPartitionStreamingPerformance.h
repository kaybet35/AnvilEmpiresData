#pragma once
#include "CoreMinimal.h"
#include "EWorldPartitionStreamingPerformance.generated.h"

UENUM(BlueprintType)
enum class EWorldPartitionStreamingPerformance : uint8 {
    Good,
    Slow,
    Critical,
};


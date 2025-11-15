#pragma once
#include "CoreMinimal.h"
#include "EStreamingSourcePriority.generated.h"

UENUM(BlueprintType)
enum class EStreamingSourcePriority : uint8 {
    Highest,
    High = 64,
    Normal = 128,
    Low = 192,
    Lowest = 255,
    Default = Normal,
};


#pragma once
#include "CoreMinimal.h"
#include "EMoviePipelineEncodeQuality.generated.h"

UENUM(BlueprintType)
enum class EMoviePipelineEncodeQuality : uint8 {
    Low,
    Medium,
    High,
    Epic,
};


#pragma once
#include "CoreMinimal.h"
#include "EShardPopulationType.generated.h"

UENUM(BlueprintType)
enum class EShardPopulationType : uint8 {
    Low,
    Medium,
    High,
    Full,
};


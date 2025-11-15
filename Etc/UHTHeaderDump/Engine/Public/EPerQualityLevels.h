#pragma once
#include "CoreMinimal.h"
#include "EPerQualityLevels.generated.h"

UENUM(BlueprintType)
enum class EPerQualityLevels : uint8 {
    Low,
    Medium,
    High,
    Epic,
    Cinematic,
    Num,
};


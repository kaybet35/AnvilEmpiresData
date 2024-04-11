#pragma once
#include "CoreMinimal.h"
#include "EItemQualityType.generated.h"

UENUM(BlueprintType)
enum class EItemQualityType : uint8 {
    None,
    Low,
    Medium,
    High,
    NumTypes,
};


#pragma once
#include "CoreMinimal.h"
#include "EAnvilItemQualityType.generated.h"

UENUM(BlueprintType)
enum class EAnvilItemQualityType : uint8 {
    None,
    Low,
    Medium,
    High,
    NumTypes,
};


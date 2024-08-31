#pragma once
#include "CoreMinimal.h"
#include "ETemperatureChangeType.generated.h"

UENUM(BlueprintType)
enum class ETemperatureChangeType : uint8 {
    NoChange,
    Increasing,
    Decreasing,
};


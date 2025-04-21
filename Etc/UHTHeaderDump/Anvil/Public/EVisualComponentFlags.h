#pragma once
#include "CoreMinimal.h"
#include "EVisualComponentFlags.generated.h"

UENUM(BlueprintType)
enum class EVisualComponentFlags : uint8 {
    Populated,
    Refining,
    Active1,
    Active2 = 4,
    Collapsed = 8,
};


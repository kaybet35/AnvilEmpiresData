#pragma once
#include "CoreMinimal.h"
#include "ETextureEncodeEffort.generated.h"

UENUM(BlueprintType)
enum class ETextureEncodeEffort : uint8 {
    Default,
    Low = 10,
    Normal = 20,
    High = 30,
};


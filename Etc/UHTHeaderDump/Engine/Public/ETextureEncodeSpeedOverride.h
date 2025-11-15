#pragma once
#include "CoreMinimal.h"
#include "ETextureEncodeSpeedOverride.generated.h"

UENUM(BlueprintType)
enum class ETextureEncodeSpeedOverride : uint8 {
    Disabled = 255,
    Final = 0,
    FinalIfAvailable,
    Fast,
};


#pragma once
#include "CoreMinimal.h"
#include "ETextureEncodeSpeed.generated.h"

UENUM(BlueprintType)
enum class ETextureEncodeSpeed : uint8 {
    Final,
    FinalIfAvailable,
    Fast,
};


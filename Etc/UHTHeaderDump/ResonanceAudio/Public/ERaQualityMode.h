#pragma once
#include "CoreMinimal.h"
#include "ERaQualityMode.generated.h"

UENUM(BlueprintType)
enum class ERaQualityMode : uint8 {
    STEREO_PANNING,
    BINAURAL_LOW,
    BINAURAL_MEDIUM,
    BINAURAL_HIGH,
};


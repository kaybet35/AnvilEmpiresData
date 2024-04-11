#pragma once
#include "CoreMinimal.h"
#include "ERaSpatializationMethod.generated.h"

UENUM(BlueprintType)
enum class ERaSpatializationMethod : uint8 {
    STEREO_PANNING,
    HRTF,
};


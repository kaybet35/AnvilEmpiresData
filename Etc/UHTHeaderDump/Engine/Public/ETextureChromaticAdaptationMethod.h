#pragma once
#include "CoreMinimal.h"
#include "ETextureChromaticAdaptationMethod.generated.h"

UENUM(BlueprintType)
enum class ETextureChromaticAdaptationMethod : uint8 {
    TCAM_None,
    TCAM_Bradford,
    TCAM_CAT02,
};


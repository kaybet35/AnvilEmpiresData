#pragma once
#include "CoreMinimal.h"
#include "ELumenRayLightingModeOverride.generated.h"

UENUM(BlueprintType)
enum class ELumenRayLightingModeOverride : uint8 {
    Default,
    SurfaceCache,
    HitLighting,
};


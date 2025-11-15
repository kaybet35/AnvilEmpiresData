#pragma once
#include "CoreMinimal.h"
#include "ELumenRayLightingMode.generated.h"

UENUM(BlueprintType)
enum class ELumenRayLightingMode : uint8 {
    SurfaceCache,
    HitLighting = 2,
};


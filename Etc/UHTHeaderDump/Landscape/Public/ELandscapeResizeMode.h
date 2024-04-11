#pragma once
#include "CoreMinimal.h"
#include "ELandscapeResizeMode.generated.h"

UENUM(BlueprintType)
enum class ELandscapeResizeMode : uint8 {
    Resample,
    Clip,
    Expand,
};


#pragma once
#include "CoreMinimal.h"
#include "ENiagaraRendererPixelCoverageMode.generated.h"

UENUM(BlueprintType)
enum class ENiagaraRendererPixelCoverageMode : uint8 {
    Automatic,
    Disabled,
    Enabled,
    Enabled_RGBA,
    Enabled_RGB,
    Enabled_A,
};


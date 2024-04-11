#pragma once
#include "CoreMinimal.h"
#include "ENiagaraSimCacheAttributeCaptureMode.generated.h"

UENUM(BlueprintType)
enum class ENiagaraSimCacheAttributeCaptureMode : uint8 {
    All,
    RenderingOnly,
    ExplicitAttributes,
};


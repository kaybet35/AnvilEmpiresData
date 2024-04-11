#pragma once
#include "CoreMinimal.h"
#include "ENiagaraRendererGpuTranslucentLatency.generated.h"

UENUM(BlueprintType)
enum class ENiagaraRendererGpuTranslucentLatency : uint8 {
    ProjectDefault,
    Immediate,
    Latent,
};


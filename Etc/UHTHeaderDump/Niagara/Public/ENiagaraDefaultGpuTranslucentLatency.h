#pragma once
#include "CoreMinimal.h"
#include "ENiagaraDefaultGpuTranslucentLatency.generated.h"

UENUM(BlueprintType)
enum class ENiagaraDefaultGpuTranslucentLatency : uint8 {
    Immediate,
    Latent,
};


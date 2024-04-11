#pragma once
#include "CoreMinimal.h"
#include "ENiagaraDebugHUDPerfSampleMode.generated.h"

UENUM()
enum class ENiagaraDebugHUDPerfSampleMode : int32 {
    FrameTotal,
    PerInstanceAverage,
};


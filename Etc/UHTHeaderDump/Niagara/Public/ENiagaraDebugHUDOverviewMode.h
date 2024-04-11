#pragma once
#include "CoreMinimal.h"
#include "ENiagaraDebugHUDOverviewMode.generated.h"

UENUM()
enum class ENiagaraDebugHUDOverviewMode : int32 {
    Overview,
    Scalability,
    Performance,
    GpuComputePerformance,
};


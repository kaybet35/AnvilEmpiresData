#pragma once
#include "CoreMinimal.h"
#include "ENiagaraGpuSyncMode.generated.h"

UENUM()
enum class ENiagaraGpuSyncMode : int32 {
    None,
    SyncCpuToGpu,
    SyncGpuToCpu,
    SyncBoth,
};


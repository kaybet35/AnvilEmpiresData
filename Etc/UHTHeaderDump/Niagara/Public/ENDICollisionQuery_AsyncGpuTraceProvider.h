#pragma once
#include "CoreMinimal.h"
#include "ENDICollisionQuery_AsyncGpuTraceProvider.generated.h"

UENUM(BlueprintType)
namespace ENDICollisionQuery_AsyncGpuTraceProvider {
    enum Type {
        Default,
        HWRT,
        GSDF,
        None,
    };
}


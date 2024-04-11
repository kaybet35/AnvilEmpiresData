#pragma once
#include "CoreMinimal.h"
#include "ENiagaraCompilationState.generated.h"

UENUM(BlueprintType)
enum class ENiagaraCompilationState : uint8 {
    CheckDDC,
    Precompile,
    StartCompileJob,
    AwaitResult,
    OptimizeByteCode,
    ProcessResult,
    PutToDDC,
    Finished,
    Aborted,
};


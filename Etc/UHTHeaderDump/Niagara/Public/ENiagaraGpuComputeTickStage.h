#pragma once
#include "CoreMinimal.h"
#include "ENiagaraGpuComputeTickStage.generated.h"

UENUM(BlueprintType)
namespace ENiagaraGpuComputeTickStage {
    enum Type {
        PreInitViews,
        PostInitViews,
        PostOpaqueRender,
        Max,
        First = PreInitViews,
        Last = PostOpaqueRender,
    };
}


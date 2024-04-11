#pragma once
#include "CoreMinimal.h"
#include "ENiagaraDebugHUDPerfGraphMode.generated.h"

UENUM()
enum class ENiagaraDebugHUDPerfGraphMode : int32 {
    None,
    GameThread,
    RenderThread,
    GPU,
};


#pragma once
#include "CoreMinimal.h"
#include "EMovieRenderShotState.generated.h"

UENUM(BlueprintType)
enum class EMovieRenderShotState : uint8 {
    Uninitialized,
    WarmingUp,
    MotionBlur,
    Rendering,
    Finished,
};


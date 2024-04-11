#pragma once
#include "CoreMinimal.h"
#include "EMoviePipelineShutterTiming.generated.h"

UENUM(BlueprintType)
enum class EMoviePipelineShutterTiming : uint8 {
    FrameOpen,
    FrameCenter,
    FrameClose,
};


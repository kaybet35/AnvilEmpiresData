#pragma once
#include "CoreMinimal.h"
#include "EMoviePipelineTextureStreamingMethod.generated.h"

UENUM(BlueprintType)
enum class EMoviePipelineTextureStreamingMethod : uint8 {
    None,
    Disabled,
    FullyLoad,
};


#pragma once
#include "CoreMinimal.h"
#include "EPcmBitDepthConversion.generated.h"

UENUM(BlueprintType)
enum class EPcmBitDepthConversion : uint8 {
    SameAsSource,
    Int16,
    Float32,
};


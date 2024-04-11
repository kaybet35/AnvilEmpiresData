#pragma once
#include "CoreMinimal.h"
#include "ENiagaraMipMapGenerationType.generated.h"

UENUM(BlueprintType)
enum class ENiagaraMipMapGenerationType : uint8 {
    Unfiltered,
    Linear,
    Blur1,
    Blur2,
    Blur3,
    Blur4,
};


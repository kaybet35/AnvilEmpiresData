#pragma once
#include "CoreMinimal.h"
#include "EScreenPercentageMode.generated.h"

UENUM(BlueprintType)
enum class EScreenPercentageMode : uint8 {
    Manual,
    BasedOnDisplayResolution,
    BasedOnDPIScale,
};


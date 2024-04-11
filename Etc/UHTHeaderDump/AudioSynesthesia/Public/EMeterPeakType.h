#pragma once
#include "CoreMinimal.h"
#include "EMeterPeakType.generated.h"

UENUM(BlueprintType)
enum class EMeterPeakType : uint8 {
    MeanSquared,
    RootMeanSquared,
    Peak,
    Count,
};


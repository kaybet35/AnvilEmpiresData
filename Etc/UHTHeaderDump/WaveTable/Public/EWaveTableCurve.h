#pragma once
#include "CoreMinimal.h"
#include "EWaveTableCurve.generated.h"

UENUM(BlueprintType)
enum class EWaveTableCurve : uint8 {
    Linear,
    Linear_Inv,
    Exp,
    Exp_Inverse,
    Log,
    Sin,
    Sin_Full,
    SCurve,
    Shared,
    Custom,
    File,
    Count,
};


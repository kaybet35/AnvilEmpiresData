#pragma once
#include "CoreMinimal.h"
#include "EFilterInterpolationType.generated.h"

UENUM(BlueprintType)
enum EFilterInterpolationType {
    BSIT_Average,
    BSIT_Linear,
    BSIT_Cubic,
    BSIT_EaseInOut,
    BSIT_ExponentialDecay,
    BSIT_SpringDamper,
};


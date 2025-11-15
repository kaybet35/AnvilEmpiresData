#pragma once
#include "CoreMinimal.h"
#include "ERootMotionSourceStatusFlags.generated.h"

UENUM(BlueprintType)
enum class ERootMotionSourceStatusFlags : uint8 {
    Prepared = 1,
    Finished,
    MarkedForRemoval = 4,
};


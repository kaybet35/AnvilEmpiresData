#pragma once
#include "CoreMinimal.h"
#include "ERetargetRotationMode.generated.h"

UENUM(BlueprintType)
enum class ERetargetRotationMode : uint8 {
    Interpolated,
    OneToOne,
    OneToOneReversed,
    None,
};


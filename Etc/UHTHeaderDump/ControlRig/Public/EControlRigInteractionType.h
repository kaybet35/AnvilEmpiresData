#pragma once
#include "CoreMinimal.h"
#include "EControlRigInteractionType.generated.h"

UENUM(BlueprintType)
enum class EControlRigInteractionType : uint8 {
    None,
    Translate,
    Rotate,
    Scale = 4,
    All = 7,
};


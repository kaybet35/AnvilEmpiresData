#pragma once
#include "CoreMinimal.h"
#include "ERaDistanceRolloffModel.generated.h"

UENUM(BlueprintType)
enum class ERaDistanceRolloffModel : uint8 {
    LOGARITHMIC,
    LINEAR,
    NONE,
};


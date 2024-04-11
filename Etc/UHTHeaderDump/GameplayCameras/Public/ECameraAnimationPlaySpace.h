#pragma once
#include "CoreMinimal.h"
#include "ECameraAnimationPlaySpace.generated.h"

UENUM(BlueprintType)
enum class ECameraAnimationPlaySpace : uint8 {
    CameraLocal,
    World,
    UserDefined,
};


#pragma once
#include "CoreMinimal.h"
#include "EAnvilSpringArmMode.generated.h"

UENUM(BlueprintType)
enum class EAnvilSpringArmMode : uint8 {
    Normal,
    ForceZoomingIn,
    ForceZoomingOut,
};


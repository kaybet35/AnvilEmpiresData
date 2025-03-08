#pragma once
#include "CoreMinimal.h"
#include "EAnvilScorchState.generated.h"

UENUM(BlueprintType)
enum class EAnvilScorchState : uint8 {
    None,
    OnFire,
    OnFireGrowing,
    Cooling,
    NumTypes,
};


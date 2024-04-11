#pragma once
#include "CoreMinimal.h"
#include "EFishingBobberState.generated.h"

UENUM(BlueprintType)
enum class EFishingBobberState : uint8 {
    None,
    Casting,
    Idling,
    Hooked,
    Retracting,
};


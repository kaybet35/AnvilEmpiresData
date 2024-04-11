#pragma once
#include "CoreMinimal.h"
#include "ETriggerState.generated.h"

UENUM(BlueprintType)
enum class ETriggerState : uint8 {
    None,
    Ongoing,
    Triggered,
};


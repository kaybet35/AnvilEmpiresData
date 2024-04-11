#pragma once
#include "CoreMinimal.h"
#include "ETriggerEventsSupported.generated.h"

UENUM(BlueprintType)
enum class ETriggerEventsSupported : uint8 {
    None,
    Instant,
    Uninterruptible,
    Ongoing = 4,
    All = 7,
};


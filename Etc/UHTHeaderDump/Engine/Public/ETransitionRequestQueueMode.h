#pragma once
#include "CoreMinimal.h"
#include "ETransitionRequestQueueMode.generated.h"

UENUM(BlueprintType)
enum class ETransitionRequestQueueMode : uint8 {
    Shared,
    Unique,
};


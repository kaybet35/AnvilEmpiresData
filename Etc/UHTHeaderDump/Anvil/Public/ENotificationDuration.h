#pragma once
#include "CoreMinimal.h"
#include "ENotificationDuration.generated.h"

UENUM(BlueprintType)
enum class ENotificationDuration : uint8 {
    OneTick,
    Short,
    Long,
};


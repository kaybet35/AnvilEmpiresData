#pragma once
#include "CoreMinimal.h"
#include "PresenceStatus.generated.h"

UENUM(BlueprintType)
enum class PresenceStatus : uint8 {
    Unavailable,
    Available,
    Chat,
    DoNotDisturb,
    Away,
    ExtendedAway,
};


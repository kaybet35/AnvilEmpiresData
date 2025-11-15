#pragma once
#include "CoreMinimal.h"
#include "EQuartzCommandType.generated.h"

UENUM(BlueprintType)
enum class EQuartzCommandType : uint8 {
    PlaySound,
    QueueSoundToPlay,
    RetriggerSound,
    TickRateChange,
    TransportReset,
    StartOtherClock,
    Custom,
};


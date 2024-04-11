#pragma once
#include "CoreMinimal.h"
#include "ParticipantSpeakingUpdateRate.generated.h"

UENUM(BlueprintType)
enum class ParticipantSpeakingUpdateRate : uint8 {
    StateChange,
    Never,
    Update1Hz,
    Update5Hz,
    Update10Hz,
};


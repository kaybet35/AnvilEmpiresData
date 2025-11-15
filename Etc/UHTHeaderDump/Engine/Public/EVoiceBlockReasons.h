#pragma once
#include "CoreMinimal.h"
#include "EVoiceBlockReasons.generated.h"

UENUM(BlueprintType)
enum class EVoiceBlockReasons : uint8 {
    None,
    Muted,
    MutedBy,
    Gameplay = 4,
    Blocked = 8,
    BlockedBy = 16,
};


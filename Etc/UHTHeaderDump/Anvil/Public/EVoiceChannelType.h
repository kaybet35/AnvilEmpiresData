#pragma once
#include "CoreMinimal.h"
#include "EVoiceChannelType.generated.h"

UENUM(BlueprintType)
enum class EVoiceChannelType : uint8 {
    Local,
    Global,
    GlobalText,
    FactionText,
};


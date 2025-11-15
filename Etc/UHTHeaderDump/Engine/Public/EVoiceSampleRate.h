#pragma once
#include "CoreMinimal.h"
#include "EVoiceSampleRate.generated.h"

UENUM()
enum class EVoiceSampleRate : int32 {
    Low16000Hz = 16000,
    Normal24000Hz = 24000,
};


#pragma once
#include "CoreMinimal.h"
#include "EAudioMixerStreamDataFormatType.generated.h"

UENUM(BlueprintType)
enum class EAudioMixerStreamDataFormatType : uint8 {
    Unknown,
    Float,
    Int16,
    Unsupported,
};


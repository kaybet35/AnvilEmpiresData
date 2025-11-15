#pragma once
#include "CoreMinimal.h"
#include "EDefaultAudioCompressionType.generated.h"

UENUM(BlueprintType)
enum class EDefaultAudioCompressionType : uint8 {
    BinkAudio,
    ADPCM,
    PCM,
    PlatformSpecific,
};


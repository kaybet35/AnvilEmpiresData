#pragma once
#include "CoreMinimal.h"
#include "EMetasoundSourceAudioFormat.generated.h"

UENUM(BlueprintType)
enum class EMetasoundSourceAudioFormat : uint8 {
    Mono,
    Stereo,
    Quad,
    FiveDotOne,
    SevenDotOne,
    COUNT,
};


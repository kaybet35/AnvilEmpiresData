#pragma once
#include "CoreMinimal.h"
#include "EAudioBusChannels.generated.h"

UENUM(BlueprintType)
enum class EAudioBusChannels : uint8 {
    Mono,
    Stereo,
    Quad = 3,
    FivePointOne = 5,
    SevenPointOne = 7,
};


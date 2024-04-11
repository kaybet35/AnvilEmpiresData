#pragma once
#include "CoreMinimal.h"
#include "EResonanceRenderMode.generated.h"

UENUM(BlueprintType)
enum class EResonanceRenderMode : uint8 {
    StereoPanning,
    BinauralLowQuality,
    BinauralMediumQuality,
    BinauralHighQuality,
    RoomEffectsOnly,
};


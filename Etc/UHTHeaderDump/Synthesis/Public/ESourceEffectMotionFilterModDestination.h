#pragma once
#include "CoreMinimal.h"
#include "ESourceEffectMotionFilterModDestination.generated.h"

UENUM(BlueprintType)
enum class ESourceEffectMotionFilterModDestination : uint8 {
    FilterACutoffFrequency,
    FilterAResonance,
    FilterAOutputVolumeDB,
    FilterBCutoffFrequency,
    FilterBResonance,
    FilterBOutputVolumeDB,
    FilterMix,
    Count,
};


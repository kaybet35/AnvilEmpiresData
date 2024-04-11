#pragma once
#include "CoreMinimal.h"
#include "ESourceEffectMotionFilterCircuit.generated.h"

UENUM(BlueprintType)
enum class ESourceEffectMotionFilterCircuit : uint8 {
    OnePole,
    StateVariable,
    Ladder,
    Count,
};


#pragma once
#include "CoreMinimal.h"
#include "EAnvilCharacterStance.generated.h"

UENUM(BlueprintType)
enum class EAnvilCharacterStance : uint8 {
    Standing,
    Sitting,
    OnBatteringRam,
    OnHorse,
    OnScorpion,
    OnLadder,
    OnPowerMill,
    OnWindMill,
    InHoarding,
    HoldingLadderFront,
    HoldingLadderRear,
    OnHandcart,
    OnHandCrank,
    OnCoarsenessKnob,
    NumTypes,
};


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
    InHoarding,
    HoldingLadderFront,
    HoldingLadderRear,
};


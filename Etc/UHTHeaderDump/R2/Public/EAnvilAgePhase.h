#pragma once
#include "CoreMinimal.h"
#include "EAnvilAgePhase.generated.h"

UENUM(BlueprintType)
enum class EAnvilAgePhase : uint8 {
    Init,
    PrimaryGame,
    PrimaryGameEnd,
    SecondaryGame,
    SecondaryGameEnd,
    Shutdown,
    NumTypes,
};


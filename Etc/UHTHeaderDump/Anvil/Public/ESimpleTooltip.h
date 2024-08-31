#pragma once
#include "CoreMinimal.h"
#include "ESimpleTooltip.generated.h"

UENUM(BlueprintType)
enum class ESimpleTooltip : uint8 {
    None,
    Health,
    Silver,
    Hunger,
    Militia,
    Labourers,
    Tax,
    PledgedStatus,
    MarketSilverStored,
    Decay,
    Stamina,
    AnimalHealth,
    DeploymentFood,
};


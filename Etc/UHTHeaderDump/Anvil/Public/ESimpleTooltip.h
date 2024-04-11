#pragma once
#include "CoreMinimal.h"
#include "ESimpleTooltip.generated.h"

UENUM(BlueprintType)
enum class ESimpleTooltip : uint8 {
    None,
    Health,
    Population,
    StarvingPopulation,
    Silver,
    Hunger,
    Militia,
    Labourers,
    Tax,
    Happiness,
    HappinessModifier,
    TownLevel,
    PledgedStatus,
    MarketSilverStored,
    Decay,
    Stamina,
    AnimalHealth,
};


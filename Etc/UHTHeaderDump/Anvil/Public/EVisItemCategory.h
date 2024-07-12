#pragma once
#include "CoreMinimal.h"
#include "EVisItemCategory.generated.h"

UENUM(BlueprintType)
enum class EVisItemCategory : uint8 {
    None,
    WeaponShield,
    Armour,
    Tools,
    Food,
    ResourceRaw,
    ResourceProcessed,
    NumTypes,
};


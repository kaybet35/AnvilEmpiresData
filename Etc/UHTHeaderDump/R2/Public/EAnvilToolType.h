#pragma once
#include "CoreMinimal.h"
#include "EAnvilToolType.generated.h"

UENUM(BlueprintType)
enum class EAnvilToolType : uint8 {
    None,
    Hands,
    Hammer,
    Axe,
    Hoe,
    Scythe,
    Pickaxe,
    FishingPole,
    WeakAxe,
    WeakPickAxe,
    NumTypes,
};


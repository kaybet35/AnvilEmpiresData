#pragma once
#include "CoreMinimal.h"
#include "EAnvilToolType.generated.h"

UENUM(BlueprintType)
enum class EAnvilToolType : uint8 {
    None,
    Hands,
    Hammer,
    Axe,
    AxeT2,
    AxeT3,
    Hoe,
    Scythe,
    Pickaxe,
    PickaxeT2,
    FishingPole,
    WeakAxe,
    WeakPickAxe,
    Knife,
    KnifeT2,
    KnifeT3,
    NumTypes,
};


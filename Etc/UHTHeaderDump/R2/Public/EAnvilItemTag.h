#pragma once
#include "CoreMinimal.h"
#include "EAnvilItemTag.generated.h"

UENUM(BlueprintType)
enum class EAnvilItemTag : uint8 {
    None,
    Crate,
    Stackable,
    TwoHanded,
    Large,
    PrimaryTool,
    SecondaryTool,
    Head,
    Body,
    Silver,
    LeftHand,
    RightHand,
    Tool,
    Quenchable,
    Resource,
    IngredientsStorage,
    MeatIngredientsStorage,
    StorableFoodT1,
    WeaponStorage,
    LiquidStorage,
    AnimalEquipment,
    AnimalFeed,
    Seed,
    Supplies,
    Ammunition,
    DryingRackStorage,
    NotAllowedInMarket,
    MountedWeapon,
    HeavyTool,
    ShieldStorage,
    Avatar,
    NumTypes,
};


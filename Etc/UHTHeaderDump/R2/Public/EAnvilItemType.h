#pragma once
#include "CoreMinimal.h"
#include "EAnvilItemType.generated.h"

UENUM(BlueprintType)
enum class EAnvilItemType : uint8 {
    None,
    Normal,
    Head,
    Body,
    PrimaryTool,
    SecondaryTool,
    Crate,
    Resource,
    StorableFoodT1,
    StorableFoodT2,
    StorableFoodT3,
    TownCurrency,
    All,
    Tool,
    Armor,
    LargeResource,
    NotResource,
    FoodStorageT1,
    FoodStorageT2,
    FoodStorageT3,
    MeatIngredientsStorage,
    IngredientsStorage,
    LiquidStorage,
    WeaponStorage,
    BaseStockpile,
    Quenchable,
    NumTypes,
    LeftHand,
    RightHand,
};


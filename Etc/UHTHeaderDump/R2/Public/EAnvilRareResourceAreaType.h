#pragma once
#include "CoreMinimal.h"
#include "EAnvilRareResourceAreaType.generated.h"

UENUM(BlueprintType)
enum class EAnvilRareResourceAreaType : uint8 {
    None,
    FoodArea_Deer,
    FoodArea_Boar,
    FoodArea_Wheat,
    FoodArea_Cabbage,
    FoodArea_Coal,
    FoodArea_Clay,
    Num,
};


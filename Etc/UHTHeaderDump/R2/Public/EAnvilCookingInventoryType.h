#pragma once
#include "CoreMinimal.h"
#include "EAnvilCookingInventoryType.generated.h"

UENUM(BlueprintType)
enum class EAnvilCookingInventoryType : uint8 {
    RecipeInputs,
    RecipeOutputs,
    FuelInputs,
    FuelOutputs,
    WaterInput,
    NumTypes,
};


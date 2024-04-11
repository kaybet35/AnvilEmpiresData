#pragma once
#include "CoreMinimal.h"
#include "EAnvilFoodType.generated.h"

UENUM(BlueprintType)
enum class EAnvilFoodType : uint8 {
    None,
    Berries,
    Fish,
    Produce,
    Wheat,
    MeatDeer,
    MeatBoar,
    MeatCommon,
    NumTypes,
};


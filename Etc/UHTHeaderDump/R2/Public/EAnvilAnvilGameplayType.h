#pragma once
#include "CoreMinimal.h"
#include "EAnvilAnvilGameplayType.generated.h"

UENUM(BlueprintType)
enum class EAnvilAnvilGameplayType : uint8 {
    Normal,
    HeatBased,
    NumTypes,
};


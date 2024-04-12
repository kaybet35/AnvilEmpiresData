#pragma once
#include "CoreMinimal.h"
#include "EAnvilConvertedActionType.generated.h"

UENUM(BlueprintType)
enum class EAnvilConvertedActionType : uint8 {
    HitAction,
    AnvilAction,
    HeatBoost,
    NumTypes,
};


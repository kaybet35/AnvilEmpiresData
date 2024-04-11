#pragma once
#include "CoreMinimal.h"
#include "EAnvilFieldState.generated.h"

UENUM(BlueprintType)
enum class EAnvilFieldState : uint8 {
    GrowthStage_1,
    GrowthStage_2,
    GrowthStage_3,
    ReadyToHarvest,
};


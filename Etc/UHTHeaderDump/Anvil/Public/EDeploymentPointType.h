#pragma once
#include "CoreMinimal.h"
#include "EDeploymentPointType.generated.h"

UENUM(BlueprintType)
enum class EDeploymentPointType : uint8 {
    WildSpawn,
    TownHall,
    LargeCamp,
    SmallCamp,
};


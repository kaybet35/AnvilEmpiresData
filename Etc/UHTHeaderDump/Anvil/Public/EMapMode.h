#pragma once
#include "CoreMinimal.h"
#include "EMapMode.generated.h"

UENUM(BlueprintType)
enum class EMapMode : uint8 {
    InGame,
    Spawn,
    MilitiaDeployment,
};


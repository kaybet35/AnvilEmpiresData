#pragma once
#include "CoreMinimal.h"
#include "ELocationZToSpawnEnum.generated.h"

UENUM(BlueprintType)
enum class ELocationZToSpawnEnum : uint8 {
    ChaosNiagara_LocationZToSpawn_None,
    ChaosNiagara_LocationZToSpawn_Min,
    ChaosNiagara_LocationZToSpawn_Max UMETA(Hidden),
    ChaosNiagara_LocationZToSpawn_MinMax,
};


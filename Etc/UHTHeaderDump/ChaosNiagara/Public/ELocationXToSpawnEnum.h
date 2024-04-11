#pragma once
#include "CoreMinimal.h"
#include "ELocationXToSpawnEnum.generated.h"

UENUM(BlueprintType)
enum class ELocationXToSpawnEnum : uint8 {
    ChaosNiagara_LocationXToSpawn_None,
    ChaosNiagara_LocationXToSpawn_Min,
    ChaosNiagara_LocationXToSpawn_Max UMETA(Hidden),
    ChaosNiagara_LocationXToSpawn_MinMax,
};


#pragma once
#include "CoreMinimal.h"
#include "EAnvilPlayerAimMeshType.generated.h"

UENUM(BlueprintType)
enum class EAnvilPlayerAimMeshType : uint8 {
    None,
    Ranged,
    Melee,
    FishingInvalid,
    FishingValid,
    FishingReady,
    NumTypes,
};


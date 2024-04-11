#pragma once
#include "CoreMinimal.h"
#include "EGLTFSceneMobility.generated.h"

UENUM(BlueprintType)
enum class EGLTFSceneMobility : uint8 {
    None,
    Static,
    Stationary,
    Movable = 4,
    All = 7,
};


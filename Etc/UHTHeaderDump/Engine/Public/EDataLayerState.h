#pragma once
#include "CoreMinimal.h"
#include "EDataLayerState.generated.h"

UENUM(BlueprintType)
enum class EDataLayerState : uint8 {
    Unloaded,
    Loaded,
    Activated,
};


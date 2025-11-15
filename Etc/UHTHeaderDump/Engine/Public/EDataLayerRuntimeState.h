#pragma once
#include "CoreMinimal.h"
#include "EDataLayerRuntimeState.generated.h"

UENUM(BlueprintType)
enum class EDataLayerRuntimeState : uint8 {
    Unloaded,
    Loaded,
    Activated,
};


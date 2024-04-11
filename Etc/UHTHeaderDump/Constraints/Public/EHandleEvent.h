#pragma once
#include "CoreMinimal.h"
#include "EHandleEvent.generated.h"

UENUM(BlueprintType)
enum class EHandleEvent : uint8 {
    LocalTransformUpdated,
    GlobalTransformUpdated,
    ComponentUpdated,
    Max,
};


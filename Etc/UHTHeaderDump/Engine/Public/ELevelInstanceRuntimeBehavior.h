#pragma once
#include "CoreMinimal.h"
#include "ELevelInstanceRuntimeBehavior.generated.h"

UENUM(BlueprintType)
enum class ELevelInstanceRuntimeBehavior : uint8 {
    None,
    Embedded_Deprecated,
    Partitioned,
    LevelStreaming,
};


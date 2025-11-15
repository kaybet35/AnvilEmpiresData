#pragma once
#include "CoreMinimal.h"
#include "ELevelInstancePivotType.generated.h"

UENUM(BlueprintType)
enum class ELevelInstancePivotType : uint8 {
    CenterMinZ,
    Center,
    Actor,
    WorldOrigin,
};


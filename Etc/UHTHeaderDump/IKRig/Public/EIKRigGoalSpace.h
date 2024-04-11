#pragma once
#include "CoreMinimal.h"
#include "EIKRigGoalSpace.generated.h"

UENUM(BlueprintType)
enum class EIKRigGoalSpace : uint8 {
    Component,
    Additive,
    World,
};


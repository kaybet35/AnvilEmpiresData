#pragma once
#include "CoreMinimal.h"
#include "EIKRigGoalTransformSource.generated.h"

UENUM(BlueprintType)
enum class EIKRigGoalTransformSource : uint8 {
    Manual,
    Bone,
    ActorComponent,
};


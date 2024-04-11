#pragma once
#include "CoreMinimal.h"
#include "EControlRigComponentSpace.generated.h"

UENUM(BlueprintType)
enum class EControlRigComponentSpace : uint8 {
    WorldSpace,
    ActorSpace,
    ComponentSpace,
    RigSpace,
    LocalSpace,
    Max,
};


#pragma once
#include "CoreMinimal.h"
#include "EWarpingVectorMode.generated.h"

UENUM(BlueprintType)
enum class EWarpingVectorMode : uint8 {
    ComponentSpaceVector,
    ActorSpaceVector,
    WorldSpaceVector,
    IKFootRootLocalSpaceVector,
};


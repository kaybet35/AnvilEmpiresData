#pragma once
#include "CoreMinimal.h"
#include "EMovieSceneControlRigSpaceType.generated.h"

UENUM(BlueprintType)
enum class EMovieSceneControlRigSpaceType : uint8 {
    Parent,
    World,
    ControlRig,
};


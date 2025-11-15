#pragma once
#include "CoreMinimal.h"
#include "EAxisList.generated.h"

UENUM(BlueprintType)
namespace EAxisList {
    enum Type {
        None,
        X,
        Y,
        Z = 4,
        Screen = 8,
        XY = 3,
        XZ = 5,
        YZ,
        XYZ,
        All = 15,
        ZRotation = YZ,
        Rotate2D = Screen,
    };
}


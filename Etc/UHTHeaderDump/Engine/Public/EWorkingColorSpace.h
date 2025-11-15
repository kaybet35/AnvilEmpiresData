#pragma once
#include "CoreMinimal.h"
#include "EWorkingColorSpace.generated.h"

UENUM(BlueprintType)
namespace EWorkingColorSpace {
    enum Type {
        sRGB = 1,
        Rec2020,
        ACESAP0,
        ACESAP1,
        P3DCI,
        P3D65,
        Custom,
    };
}


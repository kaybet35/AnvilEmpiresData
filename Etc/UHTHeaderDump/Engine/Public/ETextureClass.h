#pragma once
#include "CoreMinimal.h"
#include "ETextureClass.generated.h"

UENUM(BlueprintType)
enum class ETextureClass : uint8 {
    Invalid,
    TwoD,
    Cube,
    Array,
    CubeArray,
    Volume,
    TwoDDynamic,
    RenderTarget,
    Other2DNoSource,
    OtherUnknown,
};


#pragma once
#include "CoreMinimal.h"
#include "EGLTFTextureType.generated.h"

UENUM(BlueprintType)
enum class EGLTFTextureType : uint8 {
    None,
    HDR,
    Normalmaps,
    Lightmaps = 4,
    All = 7,
};


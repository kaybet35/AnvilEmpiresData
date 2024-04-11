#pragma once
#include "CoreMinimal.h"
#include "EGLTFTextureImageFormat.generated.h"

UENUM(BlueprintType)
enum class EGLTFTextureImageFormat : uint8 {
    None,
    PNG,
    JPEG,
};


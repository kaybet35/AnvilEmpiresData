#pragma once
#include "CoreMinimal.h"
#include "ETextureSourceFormat.generated.h"

UENUM(BlueprintType)
enum ETextureSourceFormat {
    TSF_Invalid,
    TSF_G8,
    TSF_BGRA8,
    TSF_BGRE8,
    TSF_RGBA16,
    TSF_RGBA16F,
    TSF_RGBA8_DEPRECATED,
    TSF_RGBE8_DEPRECATED,
    TSF_G16,
    TSF_RGBA32F,
    TSF_R16F,
    TSF_R32F,
    TSF_RGBA8 = TSF_RGBA8_DEPRECATED,
    TSF_RGBE8 = TSF_RGBE8_DEPRECATED,
};


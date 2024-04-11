#pragma once
#include "CoreMinimal.h"
#include "EGLTFMaterialPropertyGroup.generated.h"

UENUM(BlueprintType)
enum class EGLTFMaterialPropertyGroup : uint8 {
    None,
    BaseColorOpacity,
    MetallicRoughness,
    EmissiveColor,
    Normal,
    AmbientOcclusion,
    ClearCoatRoughness,
    ClearCoatBottomNormal,
};


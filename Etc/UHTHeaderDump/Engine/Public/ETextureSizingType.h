#pragma once
#include "CoreMinimal.h"
#include "ETextureSizingType.generated.h"

UENUM(BlueprintType)
enum ETextureSizingType {
    TextureSizingType_UseSingleTextureSize,
    TextureSizingType_UseAutomaticBiasedSizes,
    TextureSizingType_UseManualOverrideTextureSize,
    TextureSizingType_UseSimplygonAutomaticSizing,
    TextureSizingType_AutomaticFromTexelDensity,
    TextureSizingType_AutomaticFromMeshScreenSize,
    TextureSizingType_AutomaticFromMeshDrawDistance,
};


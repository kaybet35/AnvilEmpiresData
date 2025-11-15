#pragma once
#include "CoreMinimal.h"
#include "EVolumeLightingMethod.generated.h"

UENUM(BlueprintType)
enum EVolumeLightingMethod {
    VLM_VolumetricLightmap,
    VLM_SparseVolumeLightingSamples,
};


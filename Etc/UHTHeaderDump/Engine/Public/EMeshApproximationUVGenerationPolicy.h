#pragma once
#include "CoreMinimal.h"
#include "EMeshApproximationUVGenerationPolicy.generated.h"

UENUM(BlueprintType)
enum class EMeshApproximationUVGenerationPolicy : uint8 {
    PreferUVAtlas,
    PreferXAtlas,
    PreferPatchBuilder,
};


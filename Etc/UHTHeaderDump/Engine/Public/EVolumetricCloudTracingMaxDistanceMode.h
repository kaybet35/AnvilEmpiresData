#pragma once
#include "CoreMinimal.h"
#include "EVolumetricCloudTracingMaxDistanceMode.generated.h"

UENUM(BlueprintType)
enum class EVolumetricCloudTracingMaxDistanceMode : uint8 {
    DistanceFromCloudLayerEntryPoint,
    DistanceFromPointOfView,
};


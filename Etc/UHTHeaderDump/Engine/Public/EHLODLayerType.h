#pragma once
#include "CoreMinimal.h"
#include "EHLODLayerType.generated.h"

UENUM(BlueprintType)
enum class EHLODLayerType : uint8 {
    Instancing,
    MeshMerge,
    MeshSimplify,
    MeshApproximate,
    Custom,
};


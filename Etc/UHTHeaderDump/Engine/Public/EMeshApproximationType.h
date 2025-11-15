#pragma once
#include "CoreMinimal.h"
#include "EMeshApproximationType.generated.h"

UENUM(BlueprintType)
enum class EMeshApproximationType : uint8 {
    MeshAndMaterials,
    MeshShapeOnly,
};


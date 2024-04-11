#pragma once
#include "CoreMinimal.h"
#include "EGLTFMaterialVariantMode.generated.h"

UENUM(BlueprintType)
enum class EGLTFMaterialVariantMode : uint8 {
    None,
    Simple,
    UseMeshData,
};


#pragma once
#include "CoreMinimal.h"
#include "EGLTFMaterialBakeMode.generated.h"

UENUM(BlueprintType)
enum class EGLTFMaterialBakeMode : uint8 {
    Disabled,
    Simple,
    UseMeshData,
};


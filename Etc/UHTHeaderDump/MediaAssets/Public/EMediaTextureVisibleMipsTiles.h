#pragma once
#include "CoreMinimal.h"
#include "EMediaTextureVisibleMipsTiles.generated.h"

UENUM(BlueprintType)
enum class EMediaTextureVisibleMipsTiles : uint8 {
    None,
    Plane,
    Sphere,
};


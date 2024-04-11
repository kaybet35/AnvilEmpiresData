#pragma once
#include "CoreMinimal.h"
#include "ECRSimSoftCollisionType.generated.h"

UENUM(BlueprintType)
enum class ECRSimSoftCollisionType : uint8 {
    Plane,
    Sphere,
    Cone,
};


#pragma once
#include "CoreMinimal.h"
#include "EControlRigClampSpatialMode.generated.h"

UENUM(BlueprintType)
namespace EControlRigClampSpatialMode {
    enum Type {
        Plane,
        Cylinder,
        Sphere,
    };
}


#pragma once
#include "CoreMinimal.h"
#include "EReflectionMethod.generated.h"

UENUM(BlueprintType)
namespace EReflectionMethod {
    enum Type {
        None,
        Lumen,
        ScreenSpace,
        RayTraced,
    };
}


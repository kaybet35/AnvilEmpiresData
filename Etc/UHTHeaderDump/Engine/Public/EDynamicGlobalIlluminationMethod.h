#pragma once
#include "CoreMinimal.h"
#include "EDynamicGlobalIlluminationMethod.generated.h"

UENUM(BlueprintType)
namespace EDynamicGlobalIlluminationMethod {
    enum Type {
        None,
        Lumen,
        ScreenSpace,
        RayTraced,
        Plugin,
    };
}


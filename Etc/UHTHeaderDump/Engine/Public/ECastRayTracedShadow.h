#pragma once
#include "CoreMinimal.h"
#include "ECastRayTracedShadow.generated.h"

UENUM(BlueprintType)
namespace ECastRayTracedShadow {
    enum Type {
        Disabled,
        UseProjectSetting,
        Enabled,
    };
}


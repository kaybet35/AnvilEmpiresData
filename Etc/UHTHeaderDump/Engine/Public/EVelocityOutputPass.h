#pragma once
#include "CoreMinimal.h"
#include "EVelocityOutputPass.generated.h"

UENUM(BlueprintType)
namespace EVelocityOutputPass {
    enum Type {
        DepthPass,
        BasePass,
        AfterBasePass,
    };
}


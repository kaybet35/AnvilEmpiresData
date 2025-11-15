#pragma once
#include "CoreMinimal.h"
#include "EMobileAntiAliasingMethod.generated.h"

UENUM(BlueprintType)
namespace EMobileAntiAliasingMethod {
    enum Type {
        None,
        FXAA,
        TemporalAA,
        MSAA,
    };
}


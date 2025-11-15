#pragma once
#include "CoreMinimal.h"
#include "EMobileShadingPath.generated.h"

UENUM(BlueprintType)
namespace EMobileShadingPath {
    enum Type {
        Forward,
        Deferred,
    };
}


#pragma once
#include "CoreMinimal.h"
#include "ERigTransformType.generated.h"

UENUM(BlueprintType)
namespace ERigTransformType {
    enum Type {
        InitialLocal,
        CurrentLocal,
        InitialGlobal,
        CurrentGlobal,
        NumTransformTypes,
    };
}


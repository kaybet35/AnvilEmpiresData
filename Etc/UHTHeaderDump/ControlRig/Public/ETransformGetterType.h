#pragma once
#include "CoreMinimal.h"
#include "ETransformGetterType.generated.h"

UENUM(BlueprintType)
enum class ETransformGetterType : uint8 {
    Initial,
    Current,
    Max,
};


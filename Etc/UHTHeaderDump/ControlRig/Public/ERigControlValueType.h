#pragma once
#include "CoreMinimal.h"
#include "ERigControlValueType.generated.h"

UENUM(BlueprintType)
enum class ERigControlValueType : uint8 {
    Initial,
    Current,
    Minimum,
    Maximum,
};


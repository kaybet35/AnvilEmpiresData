#pragma once
#include "CoreMinimal.h"
#include "ENiagaraCVarConditionResponse.generated.h"

UENUM(BlueprintType)
enum class ENiagaraCVarConditionResponse : uint8 {
    None,
    Enable,
    Disable,
};


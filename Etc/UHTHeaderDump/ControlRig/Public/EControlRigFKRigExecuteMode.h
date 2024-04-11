#pragma once
#include "CoreMinimal.h"
#include "EControlRigFKRigExecuteMode.generated.h"

UENUM(BlueprintType)
enum class EControlRigFKRigExecuteMode : uint8 {
    Replace,
    Additive,
    Direct,
    Max,
};


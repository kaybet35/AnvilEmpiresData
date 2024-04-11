#pragma once
#include "CoreMinimal.h"
#include "EControlRigModifyBoneMode.generated.h"

UENUM(BlueprintType)
enum class EControlRigModifyBoneMode : uint8 {
    OverrideLocal,
    OverrideGlobal,
    AdditiveLocal,
    AdditiveGlobal,
    Max,
};


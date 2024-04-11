#pragma once
#include "CoreMinimal.h"
#include "EBoneGetterSetterMode.generated.h"

UENUM(BlueprintType)
enum class EBoneGetterSetterMode : uint8 {
    LocalSpace,
    GlobalSpace,
    Max,
};


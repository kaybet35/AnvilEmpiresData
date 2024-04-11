#pragma once
#include "CoreMinimal.h"
#include "EControlRigSetKey.generated.h"

UENUM(BlueprintType)
enum class EControlRigSetKey : uint8 {
    DoNotCare,
    Always,
    Never,
};


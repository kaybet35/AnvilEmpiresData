#pragma once
#include "CoreMinimal.h"
#include "EControlRigState.generated.h"

UENUM(BlueprintType)
enum class EControlRigState : uint8 {
    Init,
    Update,
    Invalid,
};


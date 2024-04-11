#pragma once
#include "CoreMinimal.h"
#include "ERigVMUserWorkflowType.generated.h"

UENUM(BlueprintType)
enum class ERigVMUserWorkflowType : uint8 {
    Invalid,
    NodeContext,
    PinContext,
    OnPinDefaultChanged = 4,
    All = 7,
};


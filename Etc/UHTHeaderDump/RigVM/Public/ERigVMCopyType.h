#pragma once
#include "CoreMinimal.h"
#include "ERigVMCopyType.generated.h"

UENUM(BlueprintType)
enum class ERigVMCopyType : uint8 {
    Default,
    FloatToDouble,
    DoubleToFloat,
};


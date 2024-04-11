#pragma once
#include "CoreMinimal.h"
#include "ERigVMParameterType.generated.h"

UENUM(BlueprintType)
enum class ERigVMParameterType : uint8 {
    Input,
    Output,
    Invalid,
};


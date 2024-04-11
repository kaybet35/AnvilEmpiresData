#pragma once
#include "CoreMinimal.h"
#include "ERigVMPinDirection.generated.h"

UENUM(BlueprintType)
enum class ERigVMPinDirection : uint8 {
    Input,
    Output,
    IO,
    Visible,
    Hidden,
    Invalid,
};


#pragma once
#include "CoreMinimal.h"
#include "ERigVMRegisterType.generated.h"

UENUM(BlueprintType)
enum class ERigVMRegisterType : uint8 {
    Plain,
    String,
    Name,
    Struct,
    Invalid,
};


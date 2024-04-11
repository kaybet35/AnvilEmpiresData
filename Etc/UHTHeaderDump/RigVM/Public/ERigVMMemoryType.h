#pragma once
#include "CoreMinimal.h"
#include "ERigVMMemoryType.generated.h"

UENUM(BlueprintType)
enum class ERigVMMemoryType : uint8 {
    Work,
    Literal,
    External,
    Debug,
    Invalid,
};


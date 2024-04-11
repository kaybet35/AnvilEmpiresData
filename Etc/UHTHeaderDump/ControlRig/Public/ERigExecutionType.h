#pragma once
#include "CoreMinimal.h"
#include "ERigExecutionType.generated.h"

UENUM(BlueprintType)
enum class ERigExecutionType : uint8 {
    Runtime,
    Editing,
    Max,
};


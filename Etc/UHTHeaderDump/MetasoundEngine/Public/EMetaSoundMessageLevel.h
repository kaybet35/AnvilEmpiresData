#pragma once
#include "CoreMinimal.h"
#include "EMetaSoundMessageLevel.generated.h"

UENUM(BlueprintType)
enum class EMetaSoundMessageLevel : uint8 {
    Error,
    Warning,
    Info,
};


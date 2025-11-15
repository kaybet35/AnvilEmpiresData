#pragma once
#include "CoreMinimal.h"
#include "ETransitionRequestOverwriteMode.generated.h"

UENUM(BlueprintType)
enum class ETransitionRequestOverwriteMode : uint8 {
    Append,
    Ignore,
    Overwrite,
};


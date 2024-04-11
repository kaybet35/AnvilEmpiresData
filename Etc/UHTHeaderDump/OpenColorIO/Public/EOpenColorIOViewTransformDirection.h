#pragma once
#include "CoreMinimal.h"
#include "EOpenColorIOViewTransformDirection.generated.h"

UENUM(BlueprintType)
enum class EOpenColorIOViewTransformDirection : uint8 {
    Forward,
    Inverse,
};


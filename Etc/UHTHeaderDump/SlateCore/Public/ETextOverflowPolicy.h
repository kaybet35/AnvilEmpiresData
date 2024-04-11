#pragma once
#include "CoreMinimal.h"
#include "ETextOverflowPolicy.generated.h"

UENUM(BlueprintType)
enum class ETextOverflowPolicy : uint8 {
    Clip,
    Ellipsis,
};


#pragma once
#include "CoreMinimal.h"
#include "EShouldCookBlueprintPropertyGuids.generated.h"

UENUM(BlueprintType)
enum class EShouldCookBlueprintPropertyGuids : uint8 {
    No,
    Yes,
    Inherit,
};


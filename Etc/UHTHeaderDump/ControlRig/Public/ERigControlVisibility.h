#pragma once
#include "CoreMinimal.h"
#include "ERigControlVisibility.generated.h"

UENUM(BlueprintType)
enum class ERigControlVisibility : uint8 {
    UserDefined,
    BasedOnSelection,
};


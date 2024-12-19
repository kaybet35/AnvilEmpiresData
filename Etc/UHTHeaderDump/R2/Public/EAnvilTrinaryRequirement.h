#pragma once
#include "CoreMinimal.h"
#include "EAnvilTrinaryRequirement.generated.h"

UENUM(BlueprintType)
enum class EAnvilTrinaryRequirement : uint8 {
    Allowed,
    Disallowed,
    Required,
    NumTypes,
};


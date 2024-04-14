#pragma once
#include "CoreMinimal.h"
#include "EAnvilR2FamilyErrorType.generated.h"

UENUM(BlueprintType)
enum class EAnvilR2FamilyErrorType : uint8 {
    Error,
    FamilyAlreadyExists,
};


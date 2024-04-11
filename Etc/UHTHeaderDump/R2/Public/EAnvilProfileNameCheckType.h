#pragma once
#include "CoreMinimal.h"
#include "EAnvilProfileNameCheckType.generated.h"

UENUM(BlueprintType)
enum class EAnvilProfileNameCheckType : uint8 {
    Valid,
    TooShort,
    TooLong,
    InvalidChar,
    AlreadyTaken,
};


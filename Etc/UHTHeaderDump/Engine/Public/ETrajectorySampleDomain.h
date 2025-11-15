#pragma once
#include "CoreMinimal.h"
#include "ETrajectorySampleDomain.generated.h"

UENUM(BlueprintType)
enum class ETrajectorySampleDomain : uint8 {
    None,
    Time,
    Distance,
};


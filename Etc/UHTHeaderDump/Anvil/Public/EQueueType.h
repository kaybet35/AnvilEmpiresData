#pragma once
#include "CoreMinimal.h"
#include "EQueueType.generated.h"

UENUM(BlueprintType)
enum class EQueueType : uint8 {
    Unselected,
    Regular,
    Admin,
    NumTypes,
};


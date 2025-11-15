#pragma once
#include "CoreMinimal.h"
#include "EStreamingSourceTargetState.generated.h"

UENUM(BlueprintType)
enum class EStreamingSourceTargetState : uint8 {
    Loaded,
    Activated,
};


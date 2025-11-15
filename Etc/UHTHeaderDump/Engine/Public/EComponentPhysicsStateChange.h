#pragma once
#include "CoreMinimal.h"
#include "EComponentPhysicsStateChange.generated.h"

UENUM(BlueprintType)
enum class EComponentPhysicsStateChange : uint8 {
    Created,
    Destroyed,
};


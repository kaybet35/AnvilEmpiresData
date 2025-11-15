#pragma once
#include "CoreMinimal.h"
#include "ECompositingSampleCount.generated.h"

UENUM(BlueprintType)
namespace ECompositingSampleCount {
    enum Type {
        One = 1,
        Two,
        Four = 4,
        Eight = 8,
    };
}


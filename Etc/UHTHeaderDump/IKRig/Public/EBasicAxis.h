#pragma once
#include "CoreMinimal.h"
#include "EBasicAxis.generated.h"

UENUM()
enum class EBasicAxis : int32 {
    X,
    Y,
    Z,
    NegX,
    NegY,
    NegZ,
};


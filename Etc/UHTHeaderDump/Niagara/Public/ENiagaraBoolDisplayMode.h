#pragma once
#include "CoreMinimal.h"
#include "ENiagaraBoolDisplayMode.generated.h"

UENUM(BlueprintType)
enum class ENiagaraBoolDisplayMode : uint8 {
    DisplayAlways,
    DisplayIfTrue,
    DisplayIfFalse,
};


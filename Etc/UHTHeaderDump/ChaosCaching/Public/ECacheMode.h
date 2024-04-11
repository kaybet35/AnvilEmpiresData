#pragma once
#include "CoreMinimal.h"
#include "ECacheMode.generated.h"

UENUM(BlueprintType)
enum class ECacheMode : uint8 {
    None,
    Play,
    Record,
};


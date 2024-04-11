#pragma once
#include "CoreMinimal.h"
#include "EStartMode.generated.h"

UENUM(BlueprintType)
enum class EStartMode : uint8 {
    Timed,
    Triggered,
};


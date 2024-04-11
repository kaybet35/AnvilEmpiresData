#pragma once
#include "CoreMinimal.h"
#include "ERetargetTranslationMode.generated.h"

UENUM(BlueprintType)
enum class ERetargetTranslationMode : uint8 {
    None,
    GloballyScaled,
    Absolute,
};


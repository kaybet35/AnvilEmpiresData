#pragma once
#include "CoreMinimal.h"
#include "EMontageBlendMode.generated.h"

UENUM(BlueprintType)
enum class EMontageBlendMode : uint8 {
    Standard,
    Inertialization,
};


#pragma once
#include "CoreMinimal.h"
#include "EAudioFadeModel.generated.h"

UENUM(BlueprintType)
enum class EAudioFadeModel : uint8 {
    InverseByDistance,
    LinearByDistance,
    ExponentialByDistance,
};


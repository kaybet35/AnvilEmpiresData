#pragma once
#include "CoreMinimal.h"
#include "ESwapAudioOutputDeviceResultState.generated.h"

UENUM(BlueprintType)
enum class ESwapAudioOutputDeviceResultState : uint8 {
    Failure,
    Success,
    None,
};


#pragma once
#include "CoreMinimal.h"
#include "ERigControlAnimationType.generated.h"

UENUM(BlueprintType)
enum class ERigControlAnimationType : uint8 {
    AnimationControl,
    AnimationChannel,
    ProxyControl,
    VisualCue,
};


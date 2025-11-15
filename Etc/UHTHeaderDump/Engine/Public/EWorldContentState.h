#pragma once
#include "CoreMinimal.h"
#include "EWorldContentState.generated.h"

UENUM(BlueprintType)
enum class EWorldContentState : uint8 {
    NoContent,
    ContentBundleInjected,
    ContentBundleInjectionFailed,
};


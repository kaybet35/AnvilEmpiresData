#pragma once
#include "CoreMinimal.h"
#include "EContentBundleClientState.generated.h"

UENUM(BlueprintType)
enum class EContentBundleClientState : uint8 {
    Unregistered,
    Registered,
    ContentInjectionRequested,
    ContentRemovalRequested,
    RegistrationFailed,
};


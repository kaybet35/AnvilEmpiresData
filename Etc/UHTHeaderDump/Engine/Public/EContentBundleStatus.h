#pragma once
#include "CoreMinimal.h"
#include "EContentBundleStatus.generated.h"

UENUM()
enum class EContentBundleStatus {
    Registered,
    ReadyToInject,
    FailedToInject,
    ContentInjected,
    Unknown = -1,
};


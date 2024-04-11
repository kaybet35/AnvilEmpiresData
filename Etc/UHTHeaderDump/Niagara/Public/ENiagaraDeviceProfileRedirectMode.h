#pragma once
#include "CoreMinimal.h"
#include "ENiagaraDeviceProfileRedirectMode.generated.h"

UENUM(BlueprintType)
enum class ENiagaraDeviceProfileRedirectMode : uint8 {
    CVar,
    DeviceProfile,
};


#pragma once
#include "CoreMinimal.h"
#include "ELumenSoftwareTracingMode.generated.h"

UENUM(BlueprintType)
namespace ELumenSoftwareTracingMode {
    enum Type {
        DetailTracing = 1,
        GlobalTracing = 0,
    };
}


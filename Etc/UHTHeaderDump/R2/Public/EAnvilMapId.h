#pragma once
#include "CoreMinimal.h"
#include "EAnvilMapId.generated.h"

UENUM(BlueprintType)
enum class EAnvilMapId : uint8 {
    Invalid,
    Sandbox,
    Calligo01,
    SandboxUnderworld,
    CalligoUnderworld01,
    Trailer,
    NumTypes,
};


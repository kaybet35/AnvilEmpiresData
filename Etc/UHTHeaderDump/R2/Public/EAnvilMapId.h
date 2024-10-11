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
    CalligoUnderworld02,
    CalligoUnderworld03,
    CalligoUnderworld04,
    CalligoUnderworld05,
    SandboxUnderworld02,
    Trailer,
    NumTypes,
};


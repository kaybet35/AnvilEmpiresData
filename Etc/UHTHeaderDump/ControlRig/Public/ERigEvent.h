#pragma once
#include "CoreMinimal.h"
#include "ERigEvent.generated.h"

UENUM(BlueprintType)
enum class ERigEvent : uint8 {
    None,
    RequestAutoKey,
    OpenUndoBracket,
    CloseUndoBracket,
    Max,
};


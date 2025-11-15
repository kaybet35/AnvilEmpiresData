#pragma once
#include "CoreMinimal.h"
#include "ETypedElementWorldType.generated.h"

UENUM(BlueprintType)
enum class ETypedElementWorldType : uint8 {
    Game,
    Editor,
};


#pragma once
#include "CoreMinimal.h"
#include "EDataLayerType.generated.h"

UENUM(BlueprintType)
enum class EDataLayerType : uint8 {
    Runtime,
    Editor,
    Unknown,
    Size,
};


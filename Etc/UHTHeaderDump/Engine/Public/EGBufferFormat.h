#pragma once
#include "CoreMinimal.h"
#include "EGBufferFormat.generated.h"

UENUM(BlueprintType)
namespace EGBufferFormat {
    enum Type {
        Force8BitsPerChannel,
        Default,
        HighPrecisionNormals = 3,
        Force16BitsPerChannel = 5,
    };
}


#pragma once
#include "CoreMinimal.h"
#include "EShaderCompressionFormat.generated.h"

UENUM(BlueprintType)
namespace EShaderCompressionFormat {
    enum Type {
        None,
        LZ4,
        Oodle,
        Zlib,
    };
}


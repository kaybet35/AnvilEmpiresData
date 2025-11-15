#pragma once
#include "CoreMinimal.h"
#include "ETextureSourceCompressionFormat.generated.h"

UENUM(BlueprintType)
enum ETextureSourceCompressionFormat {
    TSCF_None,
    TSCF_PNG,
    TSCF_JPEG,
};


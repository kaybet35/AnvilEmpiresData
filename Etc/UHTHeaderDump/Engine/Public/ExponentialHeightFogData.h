#pragma once
#include "CoreMinimal.h"
#include "ExponentialHeightFogData.generated.h"

USTRUCT(BlueprintType)
struct FExponentialHeightFogData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float FogDensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float FogHeightFalloff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float FogHeightOffset;
    
    ENGINE_API FExponentialHeightFogData();
};


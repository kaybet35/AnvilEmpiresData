#pragma once
#include "CoreMinimal.h"
#include "CachedFloatCurve.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FCachedFloatCurve {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurveName;
    
    FCachedFloatCurve();
};


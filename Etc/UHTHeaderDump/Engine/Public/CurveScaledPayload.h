#pragma once
#include "CoreMinimal.h"
#include "CurvePayload.h"
#include "CurveScaledPayload.generated.h"

USTRUCT(BlueprintType)
struct FCurveScaledPayload : public FCurvePayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Factor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Origin;
    
    ENGINE_API FCurveScaledPayload();
};


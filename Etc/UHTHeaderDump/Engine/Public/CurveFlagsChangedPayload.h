#pragma once
#include "CoreMinimal.h"
#include "CurvePayload.h"
#include "CurveFlagsChangedPayload.generated.h"

USTRUCT(BlueprintType)
struct FCurveFlagsChangedPayload : public FCurvePayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OldFlags;
    
    ENGINE_API FCurveFlagsChangedPayload();
};


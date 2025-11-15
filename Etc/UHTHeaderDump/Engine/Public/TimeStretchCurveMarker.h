#pragma once
#include "CoreMinimal.h"
#include "TimeStretchCurveMarker.generated.h"

USTRUCT(BlueprintType)
struct FTimeStretchCurveMarker {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Alpha;
    
    ENGINE_API FTimeStretchCurveMarker();
};


#pragma once
#include "CoreMinimal.h"
#include "TimeStretchCurveMarker.h"
#include "TimeStretchCurve.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FTimeStretchCurve {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SamplingRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurveValueMinPrecision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTimeStretchCurveMarker> Markers;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float Sum_dT_i_by_C_i[3];
    
public:
    FTimeStretchCurve();
};


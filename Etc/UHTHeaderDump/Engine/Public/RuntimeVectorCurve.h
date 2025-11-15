#pragma once
#include "CoreMinimal.h"
#include "RichCurve.h"
#include "RuntimeVectorCurve.generated.h"

class UCurveVector;

USTRUCT(BlueprintType)
struct ENGINE_API FRuntimeVectorCurve {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRichCurve VectorCurves[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* ExternalCurve;
    
    FRuntimeVectorCurve();
};


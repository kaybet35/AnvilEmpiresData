#pragma once
#include "CoreMinimal.h"
#include "AnimCurveBase.h"
#include "RichCurve.h"
#include "VectorCurve.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FVectorCurve : public FAnimCurveBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRichCurve FloatCurves[3];
    
    FVectorCurve();
};


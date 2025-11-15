#pragma once
#include "CoreMinimal.h"
#include "AnimCurveBase.h"
#include "VectorCurve.h"
#include "TransformCurve.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FTransformCurve : public FAnimCurveBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVectorCurve TranslationCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVectorCurve RotationCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVectorCurve ScaleCurve;
    
    FTransformCurve();
};


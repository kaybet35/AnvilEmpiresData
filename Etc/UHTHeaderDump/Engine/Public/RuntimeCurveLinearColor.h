#pragma once
#include "CoreMinimal.h"
#include "RichCurve.h"
#include "RuntimeCurveLinearColor.generated.h"

class UCurveLinearColor;

USTRUCT(BlueprintType)
struct ENGINE_API FRuntimeCurveLinearColor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRichCurve ColorCurves[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveLinearColor* ExternalCurve;
    
    FRuntimeCurveLinearColor();
};


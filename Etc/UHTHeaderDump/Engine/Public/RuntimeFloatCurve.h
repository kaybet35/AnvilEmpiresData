#pragma once
#include "CoreMinimal.h"
#include "RichCurve.h"
#include "RuntimeFloatCurve.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct ENGINE_API FRuntimeFloatCurve {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FRichCurve EditorCurveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ExternalCurve;
    
    FRuntimeFloatCurve();
};


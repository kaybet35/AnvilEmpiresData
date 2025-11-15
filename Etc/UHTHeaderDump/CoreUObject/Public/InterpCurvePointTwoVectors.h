#pragma once
#include "CoreMinimal.h"
#include "EInterpCurveMode.h"
#include "TwoVectors.h"
#include "InterpCurvePointTwoVectors.generated.h"

USTRUCT(BlueprintType, NoExport)
struct FInterpCurvePointTwoVectors {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InVal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTwoVectors OutVal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTwoVectors ArriveTangent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTwoVectors LeaveTangent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EInterpCurveMode> InterpMode;
    
    COREUOBJECT_API FInterpCurvePointTwoVectors();
};


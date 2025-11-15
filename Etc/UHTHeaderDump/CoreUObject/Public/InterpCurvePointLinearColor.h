#pragma once
#include "CoreMinimal.h"
#include "EInterpCurveMode.h"
#include "LinearColor.h"
#include "InterpCurvePointLinearColor.generated.h"

USTRUCT(BlueprintType, NoExport)
struct FInterpCurvePointLinearColor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InVal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor OutVal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ArriveTangent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor LeaveTangent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EInterpCurveMode> InterpMode;
    
    COREUOBJECT_API FInterpCurvePointLinearColor();
};


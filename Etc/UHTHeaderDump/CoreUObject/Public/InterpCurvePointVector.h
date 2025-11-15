#pragma once
#include "CoreMinimal.h"
#include "EInterpCurveMode.h"
#include "Vector.h"
#include "InterpCurvePointVector.generated.h"

USTRUCT(BlueprintType, NoExport)
struct FInterpCurvePointVector {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InVal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector OutVal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ArriveTangent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LeaveTangent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EInterpCurveMode> InterpMode;
    
    COREUOBJECT_API FInterpCurvePointVector();
};


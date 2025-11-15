#pragma once
#include "CoreMinimal.h"
#include "EInterpCurveMode.h"
#include "Vector2D.h"
#include "InterpCurvePointVector2D.generated.h"

USTRUCT(BlueprintType, NoExport)
struct FInterpCurvePointVector2D {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InVal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D OutVal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ArriveTangent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D LeaveTangent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EInterpCurveMode> InterpMode;
    
    COREUOBJECT_API FInterpCurvePointVector2D();
};


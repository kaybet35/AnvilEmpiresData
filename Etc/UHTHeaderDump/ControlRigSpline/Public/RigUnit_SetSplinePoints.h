#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ControlRig -ObjectName=RigUnitMutable -FallbackName=RigUnitMutable
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ControlRigSpline.h"
#include "RigUnit_SetSplinePoints.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIGSPLINE_API FRigUnit_SetSplinePoints : public FRigUnitMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> Points;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FControlRigSpline Spline;
    
    FRigUnit_SetSplinePoints();
};


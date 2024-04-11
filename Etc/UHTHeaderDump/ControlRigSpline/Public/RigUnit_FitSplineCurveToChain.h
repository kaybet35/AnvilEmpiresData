#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ControlRig -ObjectName=RigElementKeyCollection -FallbackName=RigElementKeyCollection
//CROSS-MODULE INCLUDE V2: -ModuleName=ControlRig -ObjectName=RigUnit_HighlevelBaseMutable -FallbackName=RigUnit_HighlevelBaseMutable
#include "ControlRigSpline.h"
#include "RigUnit_FitSplineCurveToChain.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIGSPLINE_API FRigUnit_FitSplineCurveToChain : public FRigUnit_HighlevelBaseMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigElementKeyCollection Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FControlRigSpline Spline;
    
    FRigUnit_FitSplineCurveToChain();
};


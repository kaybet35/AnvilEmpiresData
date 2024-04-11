#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "MathRBFInterpolateVectorColor_Target.h"
#include "RigUnit_MathRBFInterpolateVectorBase.h"
#include "RigUnit_MathRBFInterpolateVectorColor.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathRBFInterpolateVectorColor : public FRigUnit_MathRBFInterpolateVectorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMathRBFInterpolateVectorColor_Target> Targets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Output;
    
    FRigUnit_MathRBFInterpolateVectorColor();
};


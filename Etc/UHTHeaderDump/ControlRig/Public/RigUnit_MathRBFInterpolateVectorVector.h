#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "MathRBFInterpolateVectorVector_Target.h"
#include "RigUnit_MathRBFInterpolateVectorBase.h"
#include "RigUnit_MathRBFInterpolateVectorVector.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathRBFInterpolateVectorVector : public FRigUnit_MathRBFInterpolateVectorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMathRBFInterpolateVectorVector_Target> Targets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Output;
    
    FRigUnit_MathRBFInterpolateVectorVector();
};


#pragma once
#include "CoreMinimal.h"
#include "MathRBFInterpolateVectorFloat_Target.h"
#include "RigUnit_MathRBFInterpolateVectorBase.h"
#include "RigUnit_MathRBFInterpolateVectorFloat.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathRBFInterpolateVectorFloat : public FRigUnit_MathRBFInterpolateVectorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMathRBFInterpolateVectorFloat_Target> Targets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Output;
    
    FRigUnit_MathRBFInterpolateVectorFloat();
};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "MathRBFInterpolateQuatVector_Target.h"
#include "RigUnit_MathRBFInterpolateQuatBase.h"
#include "RigUnit_MathRBFInterpolateQuatVector.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathRBFInterpolateQuatVector : public FRigUnit_MathRBFInterpolateQuatBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMathRBFInterpolateQuatVector_Target> Targets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Output;
    
    FRigUnit_MathRBFInterpolateQuatVector();
};


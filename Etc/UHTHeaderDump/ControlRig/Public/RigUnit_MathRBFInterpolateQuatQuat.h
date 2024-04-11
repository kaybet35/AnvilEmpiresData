#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
#include "MathRBFInterpolateQuatQuat_Target.h"
#include "RigUnit_MathRBFInterpolateQuatBase.h"
#include "RigUnit_MathRBFInterpolateQuatQuat.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathRBFInterpolateQuatQuat : public FRigUnit_MathRBFInterpolateQuatBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMathRBFInterpolateQuatQuat_Target> Targets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuat Output;
    
    FRigUnit_MathRBFInterpolateQuatQuat();
};


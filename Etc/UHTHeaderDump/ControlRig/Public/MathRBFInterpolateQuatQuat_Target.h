#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
#include "MathRBFInterpolateQuatQuat_Target.generated.h"

USTRUCT(BlueprintType)
struct FMathRBFInterpolateQuatQuat_Target {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuat Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuat Value;
    
    CONTROLRIG_API FMathRBFInterpolateQuatQuat_Target();
};


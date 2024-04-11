#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
#include "RigUnit_MathQuaternionBase.h"
#include "RigUnit_MathQuaternionScaleV2.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathQuaternionScaleV2 : public FRigUnit_MathQuaternionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuat Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Factor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuat Result;
    
    FRigUnit_MathQuaternionScaleV2();
};


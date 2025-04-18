#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
#include "RigUnit_MathQuaternionBase.h"
#include "RigUnit_MathQuaternionBinaryOp.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathQuaternionBinaryOp : public FRigUnit_MathQuaternionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuat A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuat B;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuat Result;
    
    FRigUnit_MathQuaternionBinaryOp();
};


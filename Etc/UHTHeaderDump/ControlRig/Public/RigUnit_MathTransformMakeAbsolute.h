#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigUnit_MathTransformBase.h"
#include "RigUnit_MathTransformMakeAbsolute.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathTransformMakeAbsolute : public FRigUnit_MathTransformBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Local;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Parent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Global;
    
    FRigUnit_MathTransformMakeAbsolute();
};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Matrix -FallbackName=Matrix
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigUnit_MathMatrixBase.h"
#include "RigUnit_MathMatrixFromTransform.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_MathMatrixFromTransform : public FRigUnit_MathMatrixBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Transform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMatrix Result;
    
    FRigUnit_MathMatrixFromTransform();
};


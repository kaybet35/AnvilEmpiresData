#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=PhysicsCore -ObjectName=ELinearConstraintMotion -FallbackName=ELinearConstraintMotion
#include "ConstraintBaseParams.h"
#include "LinearConstraint.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FLinearConstraint : public FConstraintBaseParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Limit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ELinearConstraintMotion> XMotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ELinearConstraintMotion> YMotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ELinearConstraintMotion> ZMotion;
    
    FLinearConstraint();
};


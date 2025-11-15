#pragma once
#include "CoreMinimal.h"
#include "EConstraintTransform.h"
#include "RigTransformConstraint.generated.h"

USTRUCT(BlueprintType)
struct FRigTransformConstraint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EConstraintTransform::Type> TranformType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParentSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    ENGINE_API FRigTransformConstraint();
};


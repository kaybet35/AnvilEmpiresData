#pragma once
#include "CoreMinimal.h"
#include "RigTransformConstraint.h"
#include "TransformBaseConstraint.generated.h"

USTRUCT(BlueprintType)
struct FTransformBaseConstraint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRigTransformConstraint> TransformConstraints;
    
    ENGINE_API FTransformBaseConstraint();
};


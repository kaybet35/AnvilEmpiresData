#pragma once
#include "CoreMinimal.h"
#include "TransformBaseConstraint.h"
#include "TransformBase.generated.h"

USTRUCT(BlueprintType)
struct FTransformBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Node;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransformBaseConstraint Constraints[2];
    
    ENGINE_API FTransformBase();
};


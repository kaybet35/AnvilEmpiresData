#pragma once
#include "CoreMinimal.h"
#include "MotionProcessInput.generated.h"

USTRUCT(BlueprintType)
struct FMotionProcessInput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceEffectorRotationTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyApplyWhenReachedToTarget;
    
    FULLBODYIK_API FMotionProcessInput();
};


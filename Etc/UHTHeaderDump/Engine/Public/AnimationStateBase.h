#pragma once
#include "CoreMinimal.h"
#include "AnimationStateBase.generated.h"

USTRUCT(BlueprintType)
struct FAnimationStateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StateName;
    
    ENGINE_API FAnimationStateBase();
};


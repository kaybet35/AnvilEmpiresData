#pragma once
#include "CoreMinimal.h"
#include "AnimationActiveTransitionEntry.generated.h"

class UBlendProfile;

USTRUCT(BlueprintType)
struct FAnimationActiveTransitionEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendProfile* BlendProfile;
    
    ENGINE_API FAnimationActiveTransitionEntry();
};


#pragma once
#include "CoreMinimal.h"
#include "EmptyPayload.h"
#include "AnimationTrackPayload.generated.h"

USTRUCT(BlueprintType)
struct FAnimationTrackPayload : public FEmptyPayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    ENGINE_API FAnimationTrackPayload();
};


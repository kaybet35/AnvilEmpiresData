#pragma once
#include "CoreMinimal.h"
#include "AnimationTrackPayload.h"
#include "AnimationTrackAddedPayload.generated.h"

USTRUCT(BlueprintType)
struct FAnimationTrackAddedPayload : public FAnimationTrackPayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TrackIndex;
    
    ENGINE_API FAnimationTrackAddedPayload();
};


#pragma once
#include "CoreMinimal.h"
#include "AnimTrack.h"
#include "SlotAnimationTrack.generated.h"

USTRUCT(BlueprintType)
struct FSlotAnimationTrack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimTrack AnimTrack;
    
    ENGINE_API FSlotAnimationTrack();
};


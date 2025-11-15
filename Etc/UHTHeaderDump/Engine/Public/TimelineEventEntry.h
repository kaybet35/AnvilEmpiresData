#pragma once
#include "CoreMinimal.h"
#include "OnTimelineEventDelegate.h"
#include "TimelineEventEntry.generated.h"

USTRUCT(BlueprintType)
struct FTimelineEventEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTimelineEvent EventFunc;
    
    ENGINE_API FTimelineEventEntry();
};


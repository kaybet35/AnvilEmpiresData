#pragma once
#include "CoreMinimal.h"
#include "AnimSegment.h"
#include "AnimTrack.generated.h"

USTRUCT(BlueprintType)
struct FAnimTrack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FAnimSegment> AnimSegments;
    
    ENGINE_API FAnimTrack();
};


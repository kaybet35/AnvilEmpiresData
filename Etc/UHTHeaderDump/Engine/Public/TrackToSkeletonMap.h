#pragma once
#include "CoreMinimal.h"
#include "TrackToSkeletonMap.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FTrackToSkeletonMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BoneTreeIndex;
    
    FTrackToSkeletonMap();
};


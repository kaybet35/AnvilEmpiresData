#pragma once
#include "CoreMinimal.h"
#include "TTTrackId.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FTTTrackId {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TrackType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TrackIndex;
    
    FTTTrackId();
};


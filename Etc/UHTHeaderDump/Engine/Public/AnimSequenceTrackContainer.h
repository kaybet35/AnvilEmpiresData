#pragma once
#include "CoreMinimal.h"
#include "RawAnimSequenceTrack.h"
#include "AnimSequenceTrackContainer.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FAnimSequenceTrackContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRawAnimSequenceTrack> AnimationTracks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> TrackNames;
    
    FAnimSequenceTrackContainer();
};


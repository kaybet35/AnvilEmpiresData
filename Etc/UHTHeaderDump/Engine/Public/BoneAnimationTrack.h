#pragma once
#include "CoreMinimal.h"
#include "RawAnimSequenceTrack.h"
#include "BoneAnimationTrack.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FBoneAnimationTrack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRawAnimSequenceTrack InternalTrackData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BoneTreeIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    FBoneAnimationTrack();
};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneChannel -FallbackName=MovieSceneChannel
#include "MovieSceneControlRigSpaceBaseKey.h"
#include "MovieSceneControlRigSpaceChannel.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FMovieSceneControlRigSpaceChannel : public FMovieSceneChannel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFrameNumber> KeyTimes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMovieSceneControlRigSpaceBaseKey> KeyValues;
    
public:
    FMovieSceneControlRigSpaceChannel();
};


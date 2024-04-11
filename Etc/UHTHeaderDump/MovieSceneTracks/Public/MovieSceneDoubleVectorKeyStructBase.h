#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneKeyStruct -FallbackName=MovieSceneKeyStruct
#include "MovieSceneDoubleVectorKeyStructBase.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneDoubleVectorKeyStructBase : public FMovieSceneKeyStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameNumber Time;
    
    MOVIESCENETRACKS_API FMovieSceneDoubleVectorKeyStructBase();
};


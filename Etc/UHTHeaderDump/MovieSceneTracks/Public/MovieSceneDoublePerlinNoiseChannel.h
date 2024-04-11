#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneChannel -FallbackName=MovieSceneChannel
#include "PerlinNoiseParams.h"
#include "MovieSceneDoublePerlinNoiseChannel.generated.h"

USTRUCT(BlueprintType)
struct MOVIESCENETRACKS_API FMovieSceneDoublePerlinNoiseChannel : public FMovieSceneChannel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerlinNoiseParams PerlinNoiseParams;
    
    FMovieSceneDoublePerlinNoiseChannel();
};


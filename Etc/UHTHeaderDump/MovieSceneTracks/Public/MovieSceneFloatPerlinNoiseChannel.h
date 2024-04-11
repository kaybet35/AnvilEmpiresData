#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneChannel -FallbackName=MovieSceneChannel
#include "PerlinNoiseParams.h"
#include "MovieSceneFloatPerlinNoiseChannel.generated.h"

USTRUCT(BlueprintType)
struct MOVIESCENETRACKS_API FMovieSceneFloatPerlinNoiseChannel : public FMovieSceneChannel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerlinNoiseParams PerlinNoiseParams;
    
    FMovieSceneFloatPerlinNoiseChannel();
};


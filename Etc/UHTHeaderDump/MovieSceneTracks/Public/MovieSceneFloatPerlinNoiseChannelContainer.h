#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneChannelOverrideContainer -FallbackName=MovieSceneChannelOverrideContainer
#include "MovieSceneFloatPerlinNoiseChannel.h"
#include "MovieSceneFloatPerlinNoiseChannelContainer.generated.h"

UCLASS(Blueprintable)
class MOVIESCENETRACKS_API UMovieSceneFloatPerlinNoiseChannelContainer : public UMovieSceneChannelOverrideContainer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatPerlinNoiseChannel PerlinNoiseChannel;
    
public:
    UMovieSceneFloatPerlinNoiseChannelContainer();

};


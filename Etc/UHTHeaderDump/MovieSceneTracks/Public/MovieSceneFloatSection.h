#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneChannelOverrideProvider -FallbackName=MovieSceneChannelOverrideProvider
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEntityProvider -FallbackName=MovieSceneEntityProvider
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneFloatChannel -FallbackName=MovieSceneFloatChannel
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSection -FallbackName=MovieSceneSection
#include "MovieSceneFloatSection.generated.h"

class UMovieSceneSectionChannelOverrideRegistry;

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneFloatSection : public UMovieSceneSection, public IMovieSceneEntityProvider, public IMovieSceneChannelOverrideProvider {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel FloatCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMovieSceneSectionChannelOverrideRegistry* OverrideRegistry;
    
public:
    UMovieSceneFloatSection();


    // Fix for true pure virtual functions not being implemented
};


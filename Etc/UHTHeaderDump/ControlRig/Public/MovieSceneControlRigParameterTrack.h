#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneNameableTrack -FallbackName=MovieSceneNameableTrack
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneTrackTemplateProducer -FallbackName=MovieSceneTrackTemplateProducer
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=NodeAndChannelMappings -FallbackName=NodeAndChannelMappings
#include "MovieSceneControlRigParameterTrack.generated.h"

class UControlRig;
class UMovieSceneSection;

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneControlRigParameterTrack : public UMovieSceneNameableTrack, public IMovieSceneTrackTemplateProducer, public INodeAndChannelMappings {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UControlRig* ControlRig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMovieSceneSection* SectionToKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMovieSceneSection*> Sections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TrackName;
    
public:
    UMovieSceneControlRigParameterTrack();


    // Fix for true pure virtual functions not being implemented
};


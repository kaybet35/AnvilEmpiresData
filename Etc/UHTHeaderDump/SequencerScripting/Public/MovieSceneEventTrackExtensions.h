#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieSceneTracks -ObjectName=MovieSceneEvent -FallbackName=MovieSceneEvent
#include "MovieSceneEventTrackExtensions.generated.h"

class UMovieSceneEventRepeaterSection;
class UMovieSceneEventTrack;
class UMovieSceneEventTriggerSection;

UCLASS(Blueprintable)
class UMovieSceneEventTrackExtensions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMovieSceneEventTrackExtensions();

    UFUNCTION(BlueprintCallable)
    static UClass* GetBoundObjectPropertyClass(const FMovieSceneEvent& EventKey);
    
    UFUNCTION(BlueprintCallable)
    static UMovieSceneEventTriggerSection* AddEventTriggerSection(UMovieSceneEventTrack* InTrack);
    
    UFUNCTION(BlueprintCallable)
    static UMovieSceneEventRepeaterSection* AddEventRepeaterSection(UMovieSceneEventTrack* InTrack);
    
};


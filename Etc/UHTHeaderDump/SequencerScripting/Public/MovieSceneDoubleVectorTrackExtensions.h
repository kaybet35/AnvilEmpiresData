#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "MovieSceneDoubleVectorTrackExtensions.generated.h"

class UMovieSceneDoubleVectorTrack;

UCLASS(Blueprintable)
class UMovieSceneDoubleVectorTrackExtensions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMovieSceneDoubleVectorTrackExtensions();

    UFUNCTION(BlueprintCallable)
    static void SetNumChannelsUsed(UMovieSceneDoubleVectorTrack* Track, int32 InNumChannelsUsed);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetNumChannelsUsed(UMovieSceneDoubleVectorTrack* Track);
    
};


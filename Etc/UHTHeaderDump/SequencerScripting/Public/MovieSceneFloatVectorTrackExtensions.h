#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "MovieSceneFloatVectorTrackExtensions.generated.h"

class UMovieSceneFloatVectorTrack;

UCLASS(Blueprintable)
class UMovieSceneFloatVectorTrackExtensions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMovieSceneFloatVectorTrackExtensions();

    UFUNCTION(BlueprintCallable)
    static void SetNumChannelsUsed(UMovieSceneFloatVectorTrack* Track, int32 InNumChannelsUsed);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetNumChannelsUsed(UMovieSceneFloatVectorTrack* Track);
    
};


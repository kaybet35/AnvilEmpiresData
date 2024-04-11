#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "MovieSceneMaterialTrackExtensions.generated.h"

class UMovieSceneComponentMaterialTrack;

UCLASS(Blueprintable)
class UMovieSceneMaterialTrackExtensions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMovieSceneMaterialTrackExtensions();

    UFUNCTION(BlueprintCallable)
    static void SetMaterialIndex(UMovieSceneComponentMaterialTrack* Track, const int32 MaterialIndex);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetMaterialIndex(UMovieSceneComponentMaterialTrack* Track);
    
};


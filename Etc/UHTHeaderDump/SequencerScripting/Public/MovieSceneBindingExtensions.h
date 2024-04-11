#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneBindingProxy -FallbackName=MovieSceneBindingProxy
#include "Templates/SubclassOf.h"
#include "MovieSceneBindingExtensions.generated.h"

class UMovieSceneTrack;
class UObject;

UCLASS(Blueprintable)
class UMovieSceneBindingExtensions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMovieSceneBindingExtensions();

    UFUNCTION(BlueprintCallable)
    static void SetParent(const FMovieSceneBindingProxy& InBinding, const FMovieSceneBindingProxy& InParentBinding);
    
    UFUNCTION(BlueprintCallable)
    static void SetName(const FMovieSceneBindingProxy& InBinding, const FString& InName);
    
    UFUNCTION(BlueprintCallable)
    static void SetDisplayName(const FMovieSceneBindingProxy& InBinding, const FText& InDisplayName);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveTrack(const FMovieSceneBindingProxy& InBinding, UMovieSceneTrack* TrackToRemove);
    
    UFUNCTION(BlueprintCallable)
    static void Remove(const FMovieSceneBindingProxy& InBinding);
    
    UFUNCTION(BlueprintCallable)
    static void MoveBindingContents(const FMovieSceneBindingProxy& SourceBindingId, const FMovieSceneBindingProxy& DestinationBindingId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValid(const FMovieSceneBindingProxy& InBinding);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UMovieSceneTrack*> GetTracks(const FMovieSceneBindingProxy& InBinding);
    
    UFUNCTION(BlueprintCallable)
    static UClass* GetPossessedObjectClass(const FMovieSceneBindingProxy& InBinding);
    
    UFUNCTION(BlueprintCallable)
    static FMovieSceneBindingProxy GetParent(const FMovieSceneBindingProxy& InBinding);
    
    UFUNCTION(BlueprintCallable)
    static UObject* GetObjectTemplate(const FMovieSceneBindingProxy& InBinding);
    
    UFUNCTION(BlueprintCallable)
    static FString GetName(const FMovieSceneBindingProxy& InBinding);
    
    UFUNCTION(BlueprintCallable)
    static FGuid GetId(const FMovieSceneBindingProxy& InBinding);
    
    UFUNCTION(BlueprintCallable)
    static FText GetDisplayName(const FMovieSceneBindingProxy& InBinding);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FMovieSceneBindingProxy> GetChildPossessables(const FMovieSceneBindingProxy& InBinding);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UMovieSceneTrack*> FindTracksByType(const FMovieSceneBindingProxy& InBinding, TSubclassOf<UMovieSceneTrack> TrackType);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UMovieSceneTrack*> FindTracksByExactType(const FMovieSceneBindingProxy& InBinding, TSubclassOf<UMovieSceneTrack> TrackType);
    
    UFUNCTION(BlueprintCallable)
    static UMovieSceneTrack* AddTrack(const FMovieSceneBindingProxy& InBinding, TSubclassOf<UMovieSceneTrack> TrackType);
    
};


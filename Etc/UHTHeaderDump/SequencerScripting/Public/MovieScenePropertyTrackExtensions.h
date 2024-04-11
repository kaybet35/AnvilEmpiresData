#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "MovieScenePropertyTrackExtensions.generated.h"

class UEnum;
class UMovieSceneByteTrack;
class UMovieSceneObjectPropertyTrack;
class UMovieScenePropertyTrack;

UCLASS(Blueprintable)
class UMovieScenePropertyTrackExtensions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMovieScenePropertyTrackExtensions();

    UFUNCTION(BlueprintCallable)
    static void SetPropertyNameAndPath(UMovieScenePropertyTrack* Track, const FName& InPropertyName, const FString& InPropertyPath);
    
    UFUNCTION(BlueprintCallable)
    static void SetObjectPropertyClass(UMovieSceneObjectPropertyTrack* Track, UClass* PropertyClass);
    
    UFUNCTION(BlueprintCallable)
    static void SetByteTrackEnum(UMovieSceneByteTrack* Track, UEnum* InEnum);
    
    UFUNCTION(BlueprintCallable)
    static FName GetUniqueTrackName(UMovieScenePropertyTrack* Track);
    
    UFUNCTION(BlueprintCallable)
    static FString GetPropertyPath(UMovieScenePropertyTrack* Track);
    
    UFUNCTION(BlueprintCallable)
    static FName GetPropertyName(UMovieScenePropertyTrack* Track);
    
    UFUNCTION(BlueprintCallable)
    static UClass* GetObjectPropertyClass(UMovieSceneObjectPropertyTrack* Track);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UEnum* GetByteTrackEnum(UMovieSceneByteTrack* Track);
    
};


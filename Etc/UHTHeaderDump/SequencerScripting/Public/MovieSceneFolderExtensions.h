#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneBindingProxy -FallbackName=MovieSceneBindingProxy
#include "MovieSceneFolderExtensions.generated.h"

class UMovieSceneFolder;
class UMovieSceneTrack;

UCLASS(Blueprintable)
class UMovieSceneFolderExtensions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMovieSceneFolderExtensions();

    UFUNCTION(BlueprintCallable)
    static bool SetFolderName(UMovieSceneFolder* Folder, FName InFolderName);
    
    UFUNCTION(BlueprintCallable)
    static bool SetFolderColor(UMovieSceneFolder* Folder, FColor InFolderColor);
    
    UFUNCTION(BlueprintCallable)
    static bool RemoveChildObjectBinding(UMovieSceneFolder* Folder, const FMovieSceneBindingProxy InObjectBinding);
    
    UFUNCTION(BlueprintCallable)
    static bool RemoveChildMasterTrack(UMovieSceneFolder* Folder, UMovieSceneTrack* InMasterTrack);
    
    UFUNCTION(BlueprintCallable)
    static bool RemoveChildFolder(UMovieSceneFolder* TargetFolder, UMovieSceneFolder* FolderToRemove);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetFolderName(UMovieSceneFolder* Folder);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FColor GetFolderColor(UMovieSceneFolder* Folder);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FMovieSceneBindingProxy> GetChildObjectBindings(UMovieSceneFolder* Folder);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<UMovieSceneTrack*> GetChildMasterTracks(UMovieSceneFolder* Folder);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<UMovieSceneFolder*> GetChildFolders(UMovieSceneFolder* Folder);
    
    UFUNCTION(BlueprintCallable)
    static bool AddChildObjectBinding(UMovieSceneFolder* Folder, FMovieSceneBindingProxy InObjectBinding);
    
    UFUNCTION(BlueprintCallable)
    static bool AddChildMasterTrack(UMovieSceneFolder* Folder, UMovieSceneTrack* InMasterTrack);
    
    UFUNCTION(BlueprintCallable)
    static bool AddChildFolder(UMovieSceneFolder* TargetFolder, UMovieSceneFolder* FolderToAdd);
    
};


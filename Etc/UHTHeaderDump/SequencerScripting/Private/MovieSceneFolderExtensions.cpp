#include "MovieSceneFolderExtensions.h"

UMovieSceneFolderExtensions::UMovieSceneFolderExtensions() {
}

bool UMovieSceneFolderExtensions::SetFolderName(UMovieSceneFolder* Folder, FName InFolderName) {
    return false;
}

bool UMovieSceneFolderExtensions::SetFolderColor(UMovieSceneFolder* Folder, FColor InFolderColor) {
    return false;
}

bool UMovieSceneFolderExtensions::RemoveChildObjectBinding(UMovieSceneFolder* Folder, const FMovieSceneBindingProxy InObjectBinding) {
    return false;
}

bool UMovieSceneFolderExtensions::RemoveChildMasterTrack(UMovieSceneFolder* Folder, UMovieSceneTrack* InMasterTrack) {
    return false;
}

bool UMovieSceneFolderExtensions::RemoveChildFolder(UMovieSceneFolder* TargetFolder, UMovieSceneFolder* FolderToRemove) {
    return false;
}

FName UMovieSceneFolderExtensions::GetFolderName(UMovieSceneFolder* Folder) {
    return NAME_None;
}

FColor UMovieSceneFolderExtensions::GetFolderColor(UMovieSceneFolder* Folder) {
    return FColor{};
}

TArray<FMovieSceneBindingProxy> UMovieSceneFolderExtensions::GetChildObjectBindings(UMovieSceneFolder* Folder) {
    return TArray<FMovieSceneBindingProxy>();
}

TArray<UMovieSceneTrack*> UMovieSceneFolderExtensions::GetChildMasterTracks(UMovieSceneFolder* Folder) {
    return TArray<UMovieSceneTrack*>();
}

TArray<UMovieSceneFolder*> UMovieSceneFolderExtensions::GetChildFolders(UMovieSceneFolder* Folder) {
    return TArray<UMovieSceneFolder*>();
}

bool UMovieSceneFolderExtensions::AddChildObjectBinding(UMovieSceneFolder* Folder, FMovieSceneBindingProxy InObjectBinding) {
    return false;
}

bool UMovieSceneFolderExtensions::AddChildMasterTrack(UMovieSceneFolder* Folder, UMovieSceneTrack* InMasterTrack) {
    return false;
}

bool UMovieSceneFolderExtensions::AddChildFolder(UMovieSceneFolder* TargetFolder, UMovieSceneFolder* FolderToAdd) {
    return false;
}



#include "MovieSceneBindingExtensions.h"
#include "Templates/SubclassOf.h"

UMovieSceneBindingExtensions::UMovieSceneBindingExtensions() {
}

void UMovieSceneBindingExtensions::SetParent(const FMovieSceneBindingProxy& InBinding, const FMovieSceneBindingProxy& InParentBinding) {
}

void UMovieSceneBindingExtensions::SetName(const FMovieSceneBindingProxy& InBinding, const FString& InName) {
}

void UMovieSceneBindingExtensions::SetDisplayName(const FMovieSceneBindingProxy& InBinding, const FText& InDisplayName) {
}

void UMovieSceneBindingExtensions::RemoveTrack(const FMovieSceneBindingProxy& InBinding, UMovieSceneTrack* TrackToRemove) {
}

void UMovieSceneBindingExtensions::Remove(const FMovieSceneBindingProxy& InBinding) {
}

void UMovieSceneBindingExtensions::MoveBindingContents(const FMovieSceneBindingProxy& SourceBindingId, const FMovieSceneBindingProxy& DestinationBindingId) {
}

bool UMovieSceneBindingExtensions::IsValid(const FMovieSceneBindingProxy& InBinding) {
    return false;
}

TArray<UMovieSceneTrack*> UMovieSceneBindingExtensions::GetTracks(const FMovieSceneBindingProxy& InBinding) {
    return TArray<UMovieSceneTrack*>();
}

UClass* UMovieSceneBindingExtensions::GetPossessedObjectClass(const FMovieSceneBindingProxy& InBinding) {
    return NULL;
}

FMovieSceneBindingProxy UMovieSceneBindingExtensions::GetParent(const FMovieSceneBindingProxy& InBinding) {
    return FMovieSceneBindingProxy{};
}

UObject* UMovieSceneBindingExtensions::GetObjectTemplate(const FMovieSceneBindingProxy& InBinding) {
    return NULL;
}

FString UMovieSceneBindingExtensions::GetName(const FMovieSceneBindingProxy& InBinding) {
    return TEXT("");
}

FGuid UMovieSceneBindingExtensions::GetId(const FMovieSceneBindingProxy& InBinding) {
    return FGuid{};
}

FText UMovieSceneBindingExtensions::GetDisplayName(const FMovieSceneBindingProxy& InBinding) {
    return FText::GetEmpty();
}

TArray<FMovieSceneBindingProxy> UMovieSceneBindingExtensions::GetChildPossessables(const FMovieSceneBindingProxy& InBinding) {
    return TArray<FMovieSceneBindingProxy>();
}

TArray<UMovieSceneTrack*> UMovieSceneBindingExtensions::FindTracksByType(const FMovieSceneBindingProxy& InBinding, TSubclassOf<UMovieSceneTrack> TrackType) {
    return TArray<UMovieSceneTrack*>();
}

TArray<UMovieSceneTrack*> UMovieSceneBindingExtensions::FindTracksByExactType(const FMovieSceneBindingProxy& InBinding, TSubclassOf<UMovieSceneTrack> TrackType) {
    return TArray<UMovieSceneTrack*>();
}

UMovieSceneTrack* UMovieSceneBindingExtensions::AddTrack(const FMovieSceneBindingProxy& InBinding, TSubclassOf<UMovieSceneTrack> TrackType) {
    return NULL;
}



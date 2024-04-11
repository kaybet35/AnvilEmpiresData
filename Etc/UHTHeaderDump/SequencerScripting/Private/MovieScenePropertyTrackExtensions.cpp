#include "MovieScenePropertyTrackExtensions.h"

UMovieScenePropertyTrackExtensions::UMovieScenePropertyTrackExtensions() {
}

void UMovieScenePropertyTrackExtensions::SetPropertyNameAndPath(UMovieScenePropertyTrack* Track, const FName& InPropertyName, const FString& InPropertyPath) {
}

void UMovieScenePropertyTrackExtensions::SetObjectPropertyClass(UMovieSceneObjectPropertyTrack* Track, UClass* PropertyClass) {
}

void UMovieScenePropertyTrackExtensions::SetByteTrackEnum(UMovieSceneByteTrack* Track, UEnum* InEnum) {
}

FName UMovieScenePropertyTrackExtensions::GetUniqueTrackName(UMovieScenePropertyTrack* Track) {
    return NAME_None;
}

FString UMovieScenePropertyTrackExtensions::GetPropertyPath(UMovieScenePropertyTrack* Track) {
    return TEXT("");
}

FName UMovieScenePropertyTrackExtensions::GetPropertyName(UMovieScenePropertyTrack* Track) {
    return NAME_None;
}

UClass* UMovieScenePropertyTrackExtensions::GetObjectPropertyClass(UMovieSceneObjectPropertyTrack* Track) {
    return NULL;
}

UEnum* UMovieScenePropertyTrackExtensions::GetByteTrackEnum(UMovieSceneByteTrack* Track) {
    return NULL;
}



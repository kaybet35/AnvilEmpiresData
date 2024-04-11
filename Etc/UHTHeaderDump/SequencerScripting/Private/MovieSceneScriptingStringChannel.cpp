#include "MovieSceneScriptingStringChannel.h"

UMovieSceneScriptingStringChannel::UMovieSceneScriptingStringChannel() {
}

void UMovieSceneScriptingStringChannel::SetDefault(const FString& InDefaultValue) {
}

void UMovieSceneScriptingStringChannel::RemoveKey(UMovieSceneScriptingKey* Key) {
}

void UMovieSceneScriptingStringChannel::RemoveDefault() {
}

bool UMovieSceneScriptingStringChannel::HasDefault() const {
    return false;
}

TArray<UMovieSceneScriptingKey*> UMovieSceneScriptingStringChannel::GetKeys() const {
    return TArray<UMovieSceneScriptingKey*>();
}

FString UMovieSceneScriptingStringChannel::GetDefault() const {
    return TEXT("");
}

UMovieSceneScriptingStringKey* UMovieSceneScriptingStringChannel::AddKey(const FFrameNumber& InTime, const FString& NewValue, float SubFrame, ESequenceTimeUnit TimeUnit) {
    return NULL;
}



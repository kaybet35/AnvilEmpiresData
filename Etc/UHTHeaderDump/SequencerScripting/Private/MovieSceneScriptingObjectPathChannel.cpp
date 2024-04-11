#include "MovieSceneScriptingObjectPathChannel.h"

UMovieSceneScriptingObjectPathChannel::UMovieSceneScriptingObjectPathChannel() {
}

void UMovieSceneScriptingObjectPathChannel::SetDefault(UObject* InDefaultValue) {
}

void UMovieSceneScriptingObjectPathChannel::RemoveKey(UMovieSceneScriptingKey* Key) {
}

void UMovieSceneScriptingObjectPathChannel::RemoveDefault() {
}

bool UMovieSceneScriptingObjectPathChannel::HasDefault() const {
    return false;
}

TArray<UMovieSceneScriptingKey*> UMovieSceneScriptingObjectPathChannel::GetKeys() const {
    return TArray<UMovieSceneScriptingKey*>();
}

UObject* UMovieSceneScriptingObjectPathChannel::GetDefault() const {
    return NULL;
}

UMovieSceneScriptingObjectPathKey* UMovieSceneScriptingObjectPathChannel::AddKey(const FFrameNumber InTime, UObject* NewValue, float SubFrame, ESequenceTimeUnit TimeUnit) {
    return NULL;
}



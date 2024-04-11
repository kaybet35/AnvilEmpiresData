#include "MovieSceneScriptingActorReferenceChannel.h"

UMovieSceneScriptingActorReferenceChannel::UMovieSceneScriptingActorReferenceChannel() {
}

void UMovieSceneScriptingActorReferenceChannel::SetDefault(FMovieSceneObjectBindingID InDefaultValue) {
}

void UMovieSceneScriptingActorReferenceChannel::RemoveKey(UMovieSceneScriptingKey* Key) {
}

void UMovieSceneScriptingActorReferenceChannel::RemoveDefault() {
}

bool UMovieSceneScriptingActorReferenceChannel::HasDefault() const {
    return false;
}

TArray<UMovieSceneScriptingKey*> UMovieSceneScriptingActorReferenceChannel::GetKeys() const {
    return TArray<UMovieSceneScriptingKey*>();
}

FMovieSceneObjectBindingID UMovieSceneScriptingActorReferenceChannel::GetDefault() const {
    return FMovieSceneObjectBindingID{};
}

UMovieSceneScriptingActorReferenceKey* UMovieSceneScriptingActorReferenceChannel::AddKey(const FFrameNumber InTime, FMovieSceneObjectBindingID NewValue, float SubFrame, ESequenceTimeUnit TimeUnit) {
    return NULL;
}



#include "MovieSceneScriptingActorReferenceKey.h"

UMovieSceneScriptingActorReferenceKey::UMovieSceneScriptingActorReferenceKey() {
}

void UMovieSceneScriptingActorReferenceKey::SetValue(const FMovieSceneObjectBindingID& InNewValue) {
}

void UMovieSceneScriptingActorReferenceKey::SetTime(const FFrameNumber& NewFrameNumber, float SubFrame, ESequenceTimeUnit TimeUnit) {
}

FMovieSceneObjectBindingID UMovieSceneScriptingActorReferenceKey::GetValue() const {
    return FMovieSceneObjectBindingID{};
}

FFrameTime UMovieSceneScriptingActorReferenceKey::GetTime(ESequenceTimeUnit TimeUnit) const {
    return FFrameTime{};
}



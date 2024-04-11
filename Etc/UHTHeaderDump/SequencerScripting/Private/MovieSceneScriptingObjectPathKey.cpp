#include "MovieSceneScriptingObjectPathKey.h"

UMovieSceneScriptingObjectPathKey::UMovieSceneScriptingObjectPathKey() {
}

void UMovieSceneScriptingObjectPathKey::SetValue(UObject* InNewValue) {
}

void UMovieSceneScriptingObjectPathKey::SetTime(const FFrameNumber& NewFrameNumber, float SubFrame, ESequenceTimeUnit TimeUnit) {
}

UObject* UMovieSceneScriptingObjectPathKey::GetValue() const {
    return NULL;
}

FFrameTime UMovieSceneScriptingObjectPathKey::GetTime(ESequenceTimeUnit TimeUnit) const {
    return FFrameTime{};
}



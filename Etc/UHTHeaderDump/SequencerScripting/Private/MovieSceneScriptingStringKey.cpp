#include "MovieSceneScriptingStringKey.h"

UMovieSceneScriptingStringKey::UMovieSceneScriptingStringKey() {
}

void UMovieSceneScriptingStringKey::SetValue(const FString& InNewValue) {
}

void UMovieSceneScriptingStringKey::SetTime(const FFrameNumber& NewFrameNumber, float SubFrame, ESequenceTimeUnit TimeUnit) {
}

FString UMovieSceneScriptingStringKey::GetValue() const {
    return TEXT("");
}

FFrameTime UMovieSceneScriptingStringKey::GetTime(ESequenceTimeUnit TimeUnit) const {
    return FFrameTime{};
}



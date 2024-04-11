#include "MovieSceneScriptingByteKey.h"

UMovieSceneScriptingByteKey::UMovieSceneScriptingByteKey() {
}

void UMovieSceneScriptingByteKey::SetValue(uint8 InNewValue) {
}

void UMovieSceneScriptingByteKey::SetTime(const FFrameNumber& NewFrameNumber, float SubFrame, ESequenceTimeUnit TimeUnit) {
}

uint8 UMovieSceneScriptingByteKey::GetValue() const {
    return 0;
}

FFrameTime UMovieSceneScriptingByteKey::GetTime(ESequenceTimeUnit TimeUnit) const {
    return FFrameTime{};
}



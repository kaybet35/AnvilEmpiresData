#include "MovieSceneScriptingBoolChannel.h"

UMovieSceneScriptingBoolChannel::UMovieSceneScriptingBoolChannel() {
}

void UMovieSceneScriptingBoolChannel::SetDefault(bool InDefaultValue) {
}

void UMovieSceneScriptingBoolChannel::RemoveKey(UMovieSceneScriptingKey* Key) {
}

void UMovieSceneScriptingBoolChannel::RemoveDefault() {
}

bool UMovieSceneScriptingBoolChannel::HasDefault() const {
    return false;
}

int32 UMovieSceneScriptingBoolChannel::GetNumKeys() const {
    return 0;
}

TArray<UMovieSceneScriptingKey*> UMovieSceneScriptingBoolChannel::GetKeys() const {
    return TArray<UMovieSceneScriptingKey*>();
}

bool UMovieSceneScriptingBoolChannel::GetDefault() const {
    return false;
}

TArray<bool> UMovieSceneScriptingBoolChannel::EvaluateKeys(FSequencerScriptingRange Range, FFrameRate FrameRate) const {
    return TArray<bool>();
}

FSequencerScriptingRange UMovieSceneScriptingBoolChannel::ComputeEffectiveRange() const {
    return FSequencerScriptingRange{};
}

UMovieSceneScriptingBoolKey* UMovieSceneScriptingBoolChannel::AddKey(const FFrameNumber& InTime, bool NewValue, float SubFrame, ESequenceTimeUnit TimeUnit) {
    return NULL;
}



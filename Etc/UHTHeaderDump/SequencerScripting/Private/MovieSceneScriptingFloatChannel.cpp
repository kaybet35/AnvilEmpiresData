#include "MovieSceneScriptingFloatChannel.h"

UMovieSceneScriptingFloatChannel::UMovieSceneScriptingFloatChannel() {
}

void UMovieSceneScriptingFloatChannel::SetPreInfinityExtrapolation(TEnumAsByte<ERichCurveExtrapolation> InExtrapolation) {
}

void UMovieSceneScriptingFloatChannel::SetPostInfinityExtrapolation(TEnumAsByte<ERichCurveExtrapolation> InExtrapolation) {
}

void UMovieSceneScriptingFloatChannel::SetDefault(float InDefaultValue) {
}

void UMovieSceneScriptingFloatChannel::RemoveKey(UMovieSceneScriptingKey* Key) {
}

void UMovieSceneScriptingFloatChannel::RemoveDefault() {
}

bool UMovieSceneScriptingFloatChannel::HasDefault() const {
    return false;
}

TEnumAsByte<ERichCurveExtrapolation> UMovieSceneScriptingFloatChannel::GetPreInfinityExtrapolation() const {
    return RCCE_Cycle;
}

TEnumAsByte<ERichCurveExtrapolation> UMovieSceneScriptingFloatChannel::GetPostInfinityExtrapolation() const {
    return RCCE_Cycle;
}

int32 UMovieSceneScriptingFloatChannel::GetNumKeys() const {
    return 0;
}

TArray<UMovieSceneScriptingKey*> UMovieSceneScriptingFloatChannel::GetKeys() const {
    return TArray<UMovieSceneScriptingKey*>();
}

float UMovieSceneScriptingFloatChannel::GetDefault() const {
    return 0.0f;
}

TArray<float> UMovieSceneScriptingFloatChannel::EvaluateKeys(FSequencerScriptingRange Range, FFrameRate FrameRate) const {
    return TArray<float>();
}

FSequencerScriptingRange UMovieSceneScriptingFloatChannel::ComputeEffectiveRange() const {
    return FSequencerScriptingRange{};
}

UMovieSceneScriptingFloatKey* UMovieSceneScriptingFloatChannel::AddKey(const FFrameNumber& InTime, float NewValue, float SubFrame, ESequenceTimeUnit TimeUnit, EMovieSceneKeyInterpolation InInterpolation) {
    return NULL;
}



#include "MovieSceneScriptingDoubleChannel.h"

UMovieSceneScriptingDoubleChannel::UMovieSceneScriptingDoubleChannel() {
}

void UMovieSceneScriptingDoubleChannel::SetPreInfinityExtrapolation(TEnumAsByte<ERichCurveExtrapolation> InExtrapolation) {
}

void UMovieSceneScriptingDoubleChannel::SetPostInfinityExtrapolation(TEnumAsByte<ERichCurveExtrapolation> InExtrapolation) {
}

void UMovieSceneScriptingDoubleChannel::SetDefault(double InDefaultValue) {
}

void UMovieSceneScriptingDoubleChannel::RemoveKey(UMovieSceneScriptingKey* Key) {
}

void UMovieSceneScriptingDoubleChannel::RemoveDefault() {
}

bool UMovieSceneScriptingDoubleChannel::HasDefault() const {
    return false;
}

TEnumAsByte<ERichCurveExtrapolation> UMovieSceneScriptingDoubleChannel::GetPreInfinityExtrapolation() const {
    return RCCE_Cycle;
}

TEnumAsByte<ERichCurveExtrapolation> UMovieSceneScriptingDoubleChannel::GetPostInfinityExtrapolation() const {
    return RCCE_Cycle;
}

int32 UMovieSceneScriptingDoubleChannel::GetNumKeys() const {
    return 0;
}

TArray<UMovieSceneScriptingKey*> UMovieSceneScriptingDoubleChannel::GetKeys() const {
    return TArray<UMovieSceneScriptingKey*>();
}

double UMovieSceneScriptingDoubleChannel::GetDefault() const {
    return 0.0;
}

TArray<double> UMovieSceneScriptingDoubleChannel::EvaluateKeys(FSequencerScriptingRange Range, FFrameRate FrameRate) const {
    return TArray<double>();
}

FSequencerScriptingRange UMovieSceneScriptingDoubleChannel::ComputeEffectiveRange() const {
    return FSequencerScriptingRange{};
}

UMovieSceneScriptingDoubleKey* UMovieSceneScriptingDoubleChannel::AddKey(const FFrameNumber& InTime, double NewValue, float SubFrame, ESequenceTimeUnit TimeUnit, EMovieSceneKeyInterpolation InInterpolation) {
    return NULL;
}



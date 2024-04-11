#include "MovieSceneScriptingDoubleKey.h"

UMovieSceneScriptingDoubleKey::UMovieSceneScriptingDoubleKey() {
}

void UMovieSceneScriptingDoubleKey::SetValue(double InNewValue) {
}

void UMovieSceneScriptingDoubleKey::SetTime(const FFrameNumber& NewFrameNumber, float SubFrame, ESequenceTimeUnit TimeUnit) {
}

void UMovieSceneScriptingDoubleKey::SetTangentWeightMode(TEnumAsByte<ERichCurveTangentWeightMode> InNewValue) {
}

void UMovieSceneScriptingDoubleKey::SetTangentMode(TEnumAsByte<ERichCurveTangentMode> InNewValue) {
}

void UMovieSceneScriptingDoubleKey::SetLeaveTangentWeight(float InNewValue) {
}

void UMovieSceneScriptingDoubleKey::SetLeaveTangent(float InNewValue) {
}

void UMovieSceneScriptingDoubleKey::SetInterpolationMode(TEnumAsByte<ERichCurveInterpMode> InNewValue) {
}

void UMovieSceneScriptingDoubleKey::SetArriveTangentWeight(float InNewValue) {
}

void UMovieSceneScriptingDoubleKey::SetArriveTangent(float InNewValue) {
}

double UMovieSceneScriptingDoubleKey::GetValue() const {
    return 0.0;
}

FFrameTime UMovieSceneScriptingDoubleKey::GetTime(ESequenceTimeUnit TimeUnit) const {
    return FFrameTime{};
}

TEnumAsByte<ERichCurveTangentWeightMode> UMovieSceneScriptingDoubleKey::GetTangentWeightMode() const {
    return RCTWM_WeightedNone;
}

TEnumAsByte<ERichCurveTangentMode> UMovieSceneScriptingDoubleKey::GetTangentMode() const {
    return RCTM_Auto;
}

float UMovieSceneScriptingDoubleKey::GetLeaveTangentWeight() const {
    return 0.0f;
}

float UMovieSceneScriptingDoubleKey::GetLeaveTangent() const {
    return 0.0f;
}

TEnumAsByte<ERichCurveInterpMode> UMovieSceneScriptingDoubleKey::GetInterpolationMode() const {
    return RCIM_Linear;
}

float UMovieSceneScriptingDoubleKey::GetArriveTangentWeight() const {
    return 0.0f;
}

float UMovieSceneScriptingDoubleKey::GetArriveTangent() const {
    return 0.0f;
}



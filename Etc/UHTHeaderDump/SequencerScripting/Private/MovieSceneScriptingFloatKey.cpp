#include "MovieSceneScriptingFloatKey.h"

UMovieSceneScriptingFloatKey::UMovieSceneScriptingFloatKey() {
}

void UMovieSceneScriptingFloatKey::SetValue(float InNewValue) {
}

void UMovieSceneScriptingFloatKey::SetTime(const FFrameNumber& NewFrameNumber, float SubFrame, ESequenceTimeUnit TimeUnit) {
}

void UMovieSceneScriptingFloatKey::SetTangentWeightMode(TEnumAsByte<ERichCurveTangentWeightMode> InNewValue) {
}

void UMovieSceneScriptingFloatKey::SetTangentMode(TEnumAsByte<ERichCurveTangentMode> InNewValue) {
}

void UMovieSceneScriptingFloatKey::SetLeaveTangentWeight(float InNewValue) {
}

void UMovieSceneScriptingFloatKey::SetLeaveTangent(float InNewValue) {
}

void UMovieSceneScriptingFloatKey::SetInterpolationMode(TEnumAsByte<ERichCurveInterpMode> InNewValue) {
}

void UMovieSceneScriptingFloatKey::SetArriveTangentWeight(float InNewValue) {
}

void UMovieSceneScriptingFloatKey::SetArriveTangent(float InNewValue) {
}

float UMovieSceneScriptingFloatKey::GetValue() const {
    return 0.0f;
}

FFrameTime UMovieSceneScriptingFloatKey::GetTime(ESequenceTimeUnit TimeUnit) const {
    return FFrameTime{};
}

TEnumAsByte<ERichCurveTangentWeightMode> UMovieSceneScriptingFloatKey::GetTangentWeightMode() const {
    return RCTWM_WeightedNone;
}

TEnumAsByte<ERichCurveTangentMode> UMovieSceneScriptingFloatKey::GetTangentMode() const {
    return RCTM_Auto;
}

float UMovieSceneScriptingFloatKey::GetLeaveTangentWeight() const {
    return 0.0f;
}

float UMovieSceneScriptingFloatKey::GetLeaveTangent() const {
    return 0.0f;
}

TEnumAsByte<ERichCurveInterpMode> UMovieSceneScriptingFloatKey::GetInterpolationMode() const {
    return RCIM_Linear;
}

float UMovieSceneScriptingFloatKey::GetArriveTangentWeight() const {
    return 0.0f;
}

float UMovieSceneScriptingFloatKey::GetArriveTangent() const {
    return 0.0f;
}



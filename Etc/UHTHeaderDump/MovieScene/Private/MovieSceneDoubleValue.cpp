#include "MovieSceneDoubleValue.h"

FMovieSceneDoubleValue::FMovieSceneDoubleValue() {
    this->Value = 0.00f;
    this->InterpMode = RCIM_Linear;
    this->TangentMode = RCTM_Auto;
    this->PaddingByte = 0;
}


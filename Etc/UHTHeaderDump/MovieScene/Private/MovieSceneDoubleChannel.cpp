#include "MovieSceneDoubleChannel.h"

FMovieSceneDoubleChannel::FMovieSceneDoubleChannel() {
    this->PreInfinityExtrap = RCCE_Cycle;
    this->PostInfinityExtrap = RCCE_Cycle;
    this->DefaultValue = 0.00f;
    this->bHasDefaultValue = false;
}


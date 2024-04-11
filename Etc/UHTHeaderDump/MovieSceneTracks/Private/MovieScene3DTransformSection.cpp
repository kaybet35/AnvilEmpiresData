#include "MovieScene3DTransformSection.h"

UMovieScene3DTransformSection::UMovieScene3DTransformSection() {
    this->bSupportsInfiniteRange = true;
    this->OverrideRegistry = NULL;
    this->Constraints = NULL;
    this->bUseQuaternionInterpolation = false;
}



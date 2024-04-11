#include "MovieSceneCameraCutSection.h"

UMovieSceneCameraCutSection::UMovieSceneCameraCutSection() {
    this->bLockPreviousCamera = false;
    this->bHasInitialCameraCutTransform = false;
}

void UMovieSceneCameraCutSection::SetCameraBindingID(const FMovieSceneObjectBindingID& InCameraBindingID) {
}

FMovieSceneObjectBindingID UMovieSceneCameraCutSection::GetCameraBindingID() const {
    return FMovieSceneObjectBindingID{};
}



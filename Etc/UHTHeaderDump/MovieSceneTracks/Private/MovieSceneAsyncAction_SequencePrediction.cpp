#include "MovieSceneAsyncAction_SequencePrediction.h"

UMovieSceneAsyncAction_SequencePrediction::UMovieSceneAsyncAction_SequencePrediction() {
    this->SequencePlayer = NULL;
    this->SceneComponent = NULL;
}

UMovieSceneAsyncAction_SequencePrediction* UMovieSceneAsyncAction_SequencePrediction::PredictWorldTransformAtTime(UMovieSceneSequencePlayer* Player, USceneComponent* TargetComponent, float TimeInSeconds) {
    return NULL;
}

UMovieSceneAsyncAction_SequencePrediction* UMovieSceneAsyncAction_SequencePrediction::PredictWorldTransformAtFrame(UMovieSceneSequencePlayer* Player, USceneComponent* TargetComponent, FFrameTime FrameTime) {
    return NULL;
}

UMovieSceneAsyncAction_SequencePrediction* UMovieSceneAsyncAction_SequencePrediction::PredictLocalTransformAtTime(UMovieSceneSequencePlayer* Player, USceneComponent* TargetComponent, float TimeInSeconds) {
    return NULL;
}

UMovieSceneAsyncAction_SequencePrediction* UMovieSceneAsyncAction_SequencePrediction::PredictLocalTransformAtFrame(UMovieSceneSequencePlayer* Player, USceneComponent* TargetComponent, FFrameTime FrameTime) {
    return NULL;
}



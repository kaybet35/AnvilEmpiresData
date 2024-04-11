#include "MovieSceneSequenceTickInterval.h"

FMovieSceneSequenceTickInterval::FMovieSceneSequenceTickInterval() {
    this->TickIntervalSeconds = 0.00f;
    this->EvaluationBudgetMicroseconds = 0.00f;
    this->bTickWhenPaused = false;
    this->bAllowRounding = false;
}


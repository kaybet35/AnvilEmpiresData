#include "TemplateSequence.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=EMovieSceneCompletionMode -FallbackName=EMovieSceneCompletionMode

UTemplateSequence::UTemplateSequence() {
    this->DefaultCompletionMode = EMovieSceneCompletionMode::RestoreState;
    this->bParentContextsAreSignificant = true;
    this->MovieScene = NULL;
}



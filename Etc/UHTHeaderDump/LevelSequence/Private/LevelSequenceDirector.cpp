#include "LevelSequenceDirector.h"

ULevelSequenceDirector::ULevelSequenceDirector() {
    this->Player = NULL;
    this->SubSequenceID = 0;
    this->MovieScenePlayerIndex = 0;
}


UMovieSceneSequence* ULevelSequenceDirector::GetSequence() {
    return NULL;
}

FQualifiedFrameTime ULevelSequenceDirector::GetMasterSequenceTime() const {
    return FQualifiedFrameTime{};
}

FQualifiedFrameTime ULevelSequenceDirector::GetCurrentTime() const {
    return FQualifiedFrameTime{};
}

TArray<UObject*> ULevelSequenceDirector::GetBoundObjects(FMovieSceneObjectBindingID ObjectBinding) {
    return TArray<UObject*>();
}

UObject* ULevelSequenceDirector::GetBoundObject(FMovieSceneObjectBindingID ObjectBinding) {
    return NULL;
}

TArray<AActor*> ULevelSequenceDirector::GetBoundActors(FMovieSceneObjectBindingID ObjectBinding) {
    return TArray<AActor*>();
}

AActor* ULevelSequenceDirector::GetBoundActor(FMovieSceneObjectBindingID ObjectBinding) {
    return NULL;
}



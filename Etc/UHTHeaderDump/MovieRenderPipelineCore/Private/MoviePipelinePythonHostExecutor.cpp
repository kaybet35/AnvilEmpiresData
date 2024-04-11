#include "MoviePipelinePythonHostExecutor.h"

UMoviePipelinePythonHostExecutor::UMoviePipelinePythonHostExecutor() {
    this->ExecutorClass = NULL;
    this->PipelineQueue = NULL;
    this->LastLoadedWorld = NULL;
}

void UMoviePipelinePythonHostExecutor::OnMapLoad_Implementation(UWorld* InWorld) {
}

UWorld* UMoviePipelinePythonHostExecutor::GetLastLoadedWorld() const {
    return NULL;
}

void UMoviePipelinePythonHostExecutor::ExecuteDelayed_Implementation(UMoviePipelineQueue* InPipelineQueue) {
}



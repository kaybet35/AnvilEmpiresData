#include "MoviePipelineQueue.h"
#include "Templates/SubclassOf.h"

UMoviePipelineQueue::UMoviePipelineQueue() {
}

void UMoviePipelineQueue::SetJobIndex(UMoviePipelineExecutorJob* InJob, int32 Index) {
}

TArray<UMoviePipelineExecutorJob*> UMoviePipelineQueue::GetJobs() const {
    return TArray<UMoviePipelineExecutorJob*>();
}

UMoviePipelineExecutorJob* UMoviePipelineQueue::DuplicateJob(UMoviePipelineExecutorJob* InJob) {
    return NULL;
}

void UMoviePipelineQueue::DeleteJob(UMoviePipelineExecutorJob* InJob) {
}

void UMoviePipelineQueue::DeleteAllJobs() {
}

void UMoviePipelineQueue::CopyFrom(UMoviePipelineQueue* InQueue) {
}

UMoviePipelineExecutorJob* UMoviePipelineQueue::AllocateNewJob(TSubclassOf<UMoviePipelineExecutorJob> InJobType) {
    return NULL;
}



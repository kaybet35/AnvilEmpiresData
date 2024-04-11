#include "MoviePipeline.h"
#include "MoviePipelineCustomTimeStep.h"

UMoviePipeline::UMoviePipeline() {
    this->CustomTimeStep = CreateDefaultSubobject<UMoviePipelineCustomTimeStep>(TEXT("MoviePipelineCustomTimeStep"));
    this->CachedPrevCustomTimeStep = NULL;
    this->TargetSequence = NULL;
    this->LevelSequenceActor = NULL;
    this->DebugWidget = NULL;
    this->PreviewTexture = NULL;
    this->DebugWidgetClass = NULL;
    this->CurrentJob = NULL;
}

void UMoviePipeline::Shutdown(bool bError) {
}

void UMoviePipeline::SetInitializationTime(const FDateTime& InDateTime) {
}

void UMoviePipeline::RequestShutdown(bool bIsError) {
}

void UMoviePipeline::OnMoviePipelineFinishedImpl() {
}

bool UMoviePipeline::IsShutdownRequested() const {
    return false;
}

void UMoviePipeline::Initialize(UMoviePipelineExecutorJob* InJob) {
}

UTexture* UMoviePipeline::GetPreviewTexture() const {
    return NULL;
}

UMoviePipelineMasterConfig* UMoviePipeline::GetPipelineMasterConfig() const {
    return NULL;
}

FDateTime UMoviePipeline::GetInitializationTime() const {
    return FDateTime{};
}

UMoviePipelineExecutorJob* UMoviePipeline::GetCurrentJob() const {
    return NULL;
}



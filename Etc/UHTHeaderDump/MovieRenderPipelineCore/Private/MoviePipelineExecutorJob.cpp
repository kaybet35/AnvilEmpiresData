#include "MoviePipelineExecutorJob.h"
#include "MoviePipelineMasterConfig.h"

UMoviePipelineExecutorJob::UMoviePipelineExecutorJob() {
    this->StatusProgress = 0.00f;
    this->bIsConsumed = false;
    this->Configuration = CreateDefaultSubobject<UMoviePipelineMasterConfig>(TEXT("DefaultConfig"));
    this->bEnabled = true;
}

void UMoviePipelineExecutorJob::SetStatusProgress_Implementation(const float InProgress) {
}

void UMoviePipelineExecutorJob::SetStatusMessage_Implementation(const FString& InStatus) {
}

void UMoviePipelineExecutorJob::SetSequence(FSoftObjectPath InSequence) {
}

void UMoviePipelineExecutorJob::SetPresetOrigin(UMoviePipelineMasterConfig* InPreset) {
}

void UMoviePipelineExecutorJob::SetIsEnabled_Implementation(const bool bInEnabled) {
}

void UMoviePipelineExecutorJob::SetConsumed_Implementation(const bool bInConsumed) {
}

void UMoviePipelineExecutorJob::SetConfiguration(UMoviePipelineMasterConfig* InPreset) {
}

void UMoviePipelineExecutorJob::OnDuplicated_Implementation() {
}

bool UMoviePipelineExecutorJob::IsEnabled_Implementation() const {
    return false;
}

bool UMoviePipelineExecutorJob::IsConsumed_Implementation() const {
    return false;
}

float UMoviePipelineExecutorJob::GetStatusProgress_Implementation() const {
    return 0.0f;
}

FString UMoviePipelineExecutorJob::GetStatusMessage_Implementation() const {
    return TEXT("");
}

UMoviePipelineMasterConfig* UMoviePipelineExecutorJob::GetPresetOrigin() const {
    return NULL;
}

UMoviePipelineMasterConfig* UMoviePipelineExecutorJob::GetConfiguration() const {
    return NULL;
}



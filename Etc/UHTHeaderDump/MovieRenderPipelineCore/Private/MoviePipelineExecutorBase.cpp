#include "MoviePipelineExecutorBase.h"

UMoviePipelineExecutorBase::UMoviePipelineExecutorBase() {
    this->DebugWidgetClass = NULL;
    this->TargetPipelineClass = NULL;
}

void UMoviePipelineExecutorBase::SetStatusProgress_Implementation(const float InProgress) {
}

void UMoviePipelineExecutorBase::SetStatusMessage_Implementation(const FString& InStatus) {
}

void UMoviePipelineExecutorBase::SetMoviePipelineClass(UClass* InPipelineClass) {
}

bool UMoviePipelineExecutorBase::SendSocketMessage(const FString& InMessage) {
    return false;
}

int32 UMoviePipelineExecutorBase::SendHTTPRequest(const FString& InURL, const FString& InVerb, const FString& InMessage, const TMap<FString, FString>& InHeaders) {
    return 0;
}

void UMoviePipelineExecutorBase::OnExecutorFinishedImpl() {
}

void UMoviePipelineExecutorBase::OnExecutorErroredImpl(UMoviePipeline* ErroredPipeline, bool bFatal, FText ErrorReason) {
}

void UMoviePipelineExecutorBase::OnBeginFrame_Implementation() {
}

bool UMoviePipelineExecutorBase::IsSocketConnected() const {
    return false;
}

bool UMoviePipelineExecutorBase::IsRendering_Implementation() const {
    return false;
}

float UMoviePipelineExecutorBase::GetStatusProgress_Implementation() const {
    return 0.0f;
}

FString UMoviePipelineExecutorBase::GetStatusMessage_Implementation() const {
    return TEXT("");
}

void UMoviePipelineExecutorBase::Execute_Implementation(UMoviePipelineQueue* InPipelineQueue) {
}

void UMoviePipelineExecutorBase::DisconnectSocket() {
}

bool UMoviePipelineExecutorBase::ConnectSocket(const FString& InHostName, const int32 InPort) {
    return false;
}

void UMoviePipelineExecutorBase::CancelCurrentJob_Implementation() {
}

void UMoviePipelineExecutorBase::CancelAllJobs_Implementation() {
}



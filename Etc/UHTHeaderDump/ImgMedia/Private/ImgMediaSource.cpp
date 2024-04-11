#include "ImgMediaSource.h"

UImgMediaSource::UImgMediaSource() {
    this->IsPathRelativeToProjectRoot = false;
    this->bFillGapsInSequence = true;
}

void UImgMediaSource::SetTokenizedSequencePath(const FString& Path) {
}

void UImgMediaSource::SetSequencePath(const FString& Path) {
}

void UImgMediaSource::SetMipLevelDistance(float Distance) {
}

void UImgMediaSource::RemoveTargetObject(AActor* InActor) {
}

void UImgMediaSource::RemoveGlobalCamera(AActor* InActor) {
}

FString UImgMediaSource::GetSequencePath() const {
    return TEXT("");
}

void UImgMediaSource::GetProxies(TArray<FString>& OutProxies) const {
}

void UImgMediaSource::AddTargetObject(AActor* InActor) {
}

void UImgMediaSource::AddGlobalCamera(AActor* InActor) {
}



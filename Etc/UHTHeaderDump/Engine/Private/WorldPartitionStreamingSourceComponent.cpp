#include "WorldPartitionStreamingSourceComponent.h"

UWorldPartitionStreamingSourceComponent::UWorldPartitionStreamingSourceComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TargetHLODLayer = NULL;
    this->Priority = EStreamingSourcePriority::Default;
    this->bStreamingSourceEnabled = true;
    this->TargetState = EStreamingSourceTargetState::Activated;
}

bool UWorldPartitionStreamingSourceComponent::IsStreamingSourceEnabled() const {
    return false;
}

bool UWorldPartitionStreamingSourceComponent::IsStreamingCompleted() const {
    return false;
}

void UWorldPartitionStreamingSourceComponent::EnableStreamingSource() {
}

void UWorldPartitionStreamingSourceComponent::DisableStreamingSource() {
}



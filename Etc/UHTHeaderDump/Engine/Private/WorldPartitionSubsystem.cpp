#include "WorldPartitionSubsystem.h"

UWorldPartitionSubsystem::UWorldPartitionSubsystem() {
}

bool UWorldPartitionSubsystem::IsStreamingCompleted(EWorldPartitionRuntimeCellState QueryState, const TArray<FWorldPartitionStreamingQuerySource>& QuerySources, bool bExactState) const {
    return false;
}

bool UWorldPartitionSubsystem::IsAllStreamingCompleted() {
    return false;
}



#include "WorldPartitionBlueprintLibrary.h"

UWorldPartitionBlueprintLibrary::UWorldPartitionBlueprintLibrary() {
}

void UWorldPartitionBlueprintLibrary::UnloadActors(const TArray<FGuid>& InActorsToLoad) {
}

void UWorldPartitionBlueprintLibrary::LoadActors(const TArray<FGuid>& InActorsToLoad) {
}

FBox UWorldPartitionBlueprintLibrary::GetRuntimeWorldBounds() {
    return FBox{};
}

bool UWorldPartitionBlueprintLibrary::GetIntersectingActorDescs(const FBox& InBox, TArray<FActorDesc>& OutActorDescs) {
    return false;
}

FBox UWorldPartitionBlueprintLibrary::GetEditorWorldBounds() {
    return FBox{};
}

bool UWorldPartitionBlueprintLibrary::GetActorDescs(TArray<FActorDesc>& OutActorDescs) {
    return false;
}



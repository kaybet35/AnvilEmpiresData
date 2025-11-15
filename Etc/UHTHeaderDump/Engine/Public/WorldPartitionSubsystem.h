#pragma once
#include "CoreMinimal.h"
#include "EWorldPartitionRuntimeCellState.h"
#include "TickableWorldSubsystem.h"
#include "WorldPartitionStreamingQuerySource.h"
#include "WorldPartitionSubsystem.generated.h"

UCLASS(Blueprintable)
class ENGINE_API UWorldPartitionSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    UWorldPartitionSubsystem();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStreamingCompleted(EWorldPartitionRuntimeCellState QueryState, const TArray<FWorldPartitionStreamingQuerySource>& QuerySources, bool bExactState) const;
    
    UFUNCTION(BlueprintCallable)
    bool IsAllStreamingCompleted();
    
};


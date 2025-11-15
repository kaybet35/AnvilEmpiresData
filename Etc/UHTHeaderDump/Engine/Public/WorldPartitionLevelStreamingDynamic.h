#pragma once
#include "CoreMinimal.h"
#include "LevelStreamingDynamic.h"
#include "WorldPartitionLevelStreamingDynamic.generated.h"

class UWorldPartition;
class UWorldPartitionRuntimeLevelStreamingCell;

UCLASS(Blueprintable, EditInlineNew)
class ENGINE_API UWorldPartitionLevelStreamingDynamic : public ULevelStreamingDynamic {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldBeAlwaysLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UWorldPartitionRuntimeLevelStreamingCell> StreamingCell;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UWorldPartition> OuterWorldPartition;
    
public:
    UWorldPartitionLevelStreamingDynamic();

};


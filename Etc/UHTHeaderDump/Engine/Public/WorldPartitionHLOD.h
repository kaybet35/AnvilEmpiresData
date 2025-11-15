#pragma once
#include "CoreMinimal.h"
#include "Actor.h"
#include "WorldPartitionHLOD.generated.h"

class UWorldPartitionRuntimeCell;

UCLASS(Blueprintable, NotPlaceable)
class ENGINE_API AWorldPartitionHLOD : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 LODLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequireWarmup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorldPartitionRuntimeCell> SourceCell;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SourceCellName;
    
public:
    AWorldPartitionHLOD(const FObjectInitializer& ObjectInitializer);

};


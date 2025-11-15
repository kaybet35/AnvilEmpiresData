#pragma once
#include "CoreMinimal.h"
#include "WorldPartitionRuntimeCellDebugInfo.generated.h"

USTRUCT(BlueprintType)
struct FWorldPartitionRuntimeCellDebugInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GridName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 CoordX;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 CoordY;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 CoordZ;
    
    ENGINE_API FWorldPartitionRuntimeCellDebugInfo();
};


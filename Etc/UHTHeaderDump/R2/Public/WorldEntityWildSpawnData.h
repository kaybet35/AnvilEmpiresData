#pragma once
#include "CoreMinimal.h"
#include "WorldEntityWildSpawnData.generated.h"

USTRUCT(BlueprintType)
struct FWorldEntityWildSpawnData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsActiveWildSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsWildSpawnNearTown;
    
    R2_API FWorldEntityWildSpawnData();
};


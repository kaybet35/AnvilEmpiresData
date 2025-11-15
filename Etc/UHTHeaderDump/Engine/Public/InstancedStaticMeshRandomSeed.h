#pragma once
#include "CoreMinimal.h"
#include "InstancedStaticMeshRandomSeed.generated.h"

USTRUCT(BlueprintType)
struct FInstancedStaticMeshRandomSeed {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartInstanceIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RandomSeed;
    
    ENGINE_API FInstancedStaticMeshRandomSeed();
};


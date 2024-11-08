#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "DynamicPrefabSpawnInfo.generated.h"

class ADynamicPrefab;

USTRUCT(BlueprintType)
struct FDynamicPrefabSpawnInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ADynamicPrefab> CodeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CodeNameVisVar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnWeightVisVar;
    
    R2_API FDynamicPrefabSpawnInfo();
};


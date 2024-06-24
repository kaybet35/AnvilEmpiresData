#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ExplorationSpawnedEntityAvoidInfo.generated.h"

class UEntityTemplate;

USTRUCT(BlueprintType)
struct FExplorationSpawnedEntityAvoidInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEntityTemplate> EntityTypeToAvoid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EntityTypeToAvoidVisVar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
    R2_API FExplorationSpawnedEntityAvoidInfo();
};


#pragma once
#include "CoreMinimal.h"
#include "CachedAnimAssetPlayerData.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FCachedAnimAssetPlayerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StateMachineName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StateName;
    
    FCachedAnimAssetPlayerData();
};


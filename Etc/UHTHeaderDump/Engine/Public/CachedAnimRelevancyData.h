#pragma once
#include "CoreMinimal.h"
#include "CachedAnimRelevancyData.generated.h"

USTRUCT(BlueprintType)
struct ENGINE_API FCachedAnimRelevancyData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StateMachineName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StateName;
    
    FCachedAnimRelevancyData();
};


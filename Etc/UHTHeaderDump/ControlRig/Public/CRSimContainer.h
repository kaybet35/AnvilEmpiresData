#pragma once
#include "CoreMinimal.h"
#include "CRSimContainer.generated.h"

USTRUCT(BlueprintType)
struct FCRSimContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AccumulatedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeLeftForStep;
    
    CONTROLRIG_API FCRSimContainer();
};


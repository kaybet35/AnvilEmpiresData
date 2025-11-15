#pragma once
#include "CoreMinimal.h"
#include "ISMClientInstance.h"
#include "ISMClientData.generated.h"

USTRUCT(BlueprintType)
struct FISMClientData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FISMClientInstance> Instances;
    
    ENGINE_API FISMClientData();
};


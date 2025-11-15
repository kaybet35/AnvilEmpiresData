#pragma once
#include "CoreMinimal.h"
#include "ISMClientInstance.generated.h"

USTRUCT(BlueprintType)
struct FISMClientInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ComponentIndices;
    
    ENGINE_API FISMClientInstance();
};


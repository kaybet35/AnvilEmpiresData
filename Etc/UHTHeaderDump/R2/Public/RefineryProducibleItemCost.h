#pragma once
#include "CoreMinimal.h"
#include "RefineryProducibleItemCost.generated.h"

USTRUCT(BlueprintType)
struct R2_API FRefineryProducibleItemCost {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CodeName;
    
    FRefineryProducibleItemCost();
};


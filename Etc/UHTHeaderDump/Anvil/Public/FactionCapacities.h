#pragma once
#include "CoreMinimal.h"
#include "FactionCapacities.generated.h"

USTRUCT(BlueprintType)
struct FFactionCapacities {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> CapacityArray;
    
    ANVIL_API FFactionCapacities();
};


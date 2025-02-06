#pragma once
#include "CoreMinimal.h"
#include "FuelType.h"
#include "R2ConfigCombustion.generated.h"

USTRUCT(BlueprintType)
struct FR2ConfigCombustion {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFuelType> FuelList;
    
    R2_API FR2ConfigCombustion();
};


#pragma once
#include "CoreMinimal.h"
#include "BasicItemCount.h"
#include "CookingRecipe.generated.h"

USTRUCT(BlueprintType)
struct FCookingRecipe {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBasicItemCount> InputItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBasicItemCount> OutputItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CookDurationSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetNormalizedTemperature;
    
    R2_API FCookingRecipe();
};


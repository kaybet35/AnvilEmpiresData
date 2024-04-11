#pragma once
#include "CoreMinimal.h"
#include "ItemQuantity.h"
#include "CookingRecipe.generated.h"

USTRUCT(BlueprintType)
struct FCookingRecipe {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemQuantity> InputItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemQuantity> OutputItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CookDurationSec;
    
    R2_API FCookingRecipe();
};


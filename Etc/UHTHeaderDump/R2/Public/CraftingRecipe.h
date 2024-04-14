#pragma once
#include "CoreMinimal.h"
#include "BasicItemCount.h"
#include "Templates/SubclassOf.h"
#include "CraftingRecipe.generated.h"

class UItemTemplate;

USTRUCT(BlueprintType)
struct FCraftingRecipe {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBasicItemCount> RecipeIngredients;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UItemTemplate> CraftedItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CraftedItemVisVar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UItemTemplate> QualityIngredient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 QualityIngredientVisVar;
    
    R2_API FCraftingRecipe();
};


#pragma once
#include "CoreMinimal.h"
#include "CraftingRecipe.h"
#include "DataComponent.h"
#include "CraftingDataComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R2_API UCraftingDataComponent : public UDataComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCraftingRecipe> RecipeList;
    
    UCraftingDataComponent(const FObjectInitializer& ObjectInitializer);

};


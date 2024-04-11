#pragma once
#include "CoreMinimal.h"
#include "CraftingRecipe.h"
#include "ProxyComponent.h"
#include "CraftingProxyComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class R2_API UCraftingProxyComponent : public UProxyComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCraftingRecipe> RecipeList;
    
    UCraftingProxyComponent();

};


#pragma once
#include "CoreMinimal.h"
#include "CookingRecipe.h"
#include "FuelType.h"
#include "ProxyComponent.h"
#include "CookingProxyComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class R2_API UCookingProxyComponent : public UProxyComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFuelType> FuelList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCookingRecipe> RecipeList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FoodBurnDurationSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanCookWithExistingOutputs;
    
    UCookingProxyComponent();

};


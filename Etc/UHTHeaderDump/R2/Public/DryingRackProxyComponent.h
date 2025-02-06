#pragma once
#include "CoreMinimal.h"
#include "DryingRackRecipe.h"
#include "ProxyComponent.h"
#include "R2FloatRange.h"
#include "DryingRackProxyComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class R2_API UDryingRackProxyComponent : public UProxyComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDryingRackRecipe> Recipes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR2FloatRange DesiredTempRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float QualityChangeTime;
    
    UDryingRackProxyComponent();

};


#pragma once
#include "CoreMinimal.h"
#include "GrainMillRecipe.h"
#include "ProxyComponent.h"
#include "R2FloatRange.h"
#include "GrainMillProxyComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class R2_API UGrainMillProxyComponent : public UProxyComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGrainMillRecipe> RecipeList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CoarsenessKnobRotationRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CoarsenessKnobSmoothSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CoarsenessKnobPushSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CoarsenessDriftSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR2FloatRange CoarsenessEfficiencyImpact;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR2FloatRange CoarsenessQualityMapRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinActivationPower;
    
    UGrainMillProxyComponent();

};


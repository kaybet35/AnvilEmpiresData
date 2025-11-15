#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=InterpCurveVector2D -FallbackName=InterpCurveVector2D
#include "DistributionFloat.h"
#include "DistributionFloatUniformCurve.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class ENGINE_API UDistributionFloatUniformCurve : public UDistributionFloat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInterpCurveVector2D ConstantCurve;
    
    UDistributionFloatUniformCurve();

};


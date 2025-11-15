#pragma once
#include "CoreMinimal.h"
#include "ExpressionInput.h"
#include "MaterialExpression.h"
#include "MaterialExpressionSkyAtmosphereLightIlluminance.generated.h"

UCLASS(Blueprintable)
class UMaterialExpressionSkyAtmosphereLightIlluminance : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LightIndex;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput WorldPosition;
    
    UMaterialExpressionSkyAtmosphereLightIlluminance();

};


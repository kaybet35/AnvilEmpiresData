#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "MaterialExpressionSkyAtmosphereLightDirection.generated.h"

UCLASS(Blueprintable)
class UMaterialExpressionSkyAtmosphereLightDirection : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LightIndex;
    
    UMaterialExpressionSkyAtmosphereLightDirection();

};


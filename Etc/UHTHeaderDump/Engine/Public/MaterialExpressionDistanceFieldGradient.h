#pragma once
#include "CoreMinimal.h"
#include "ExpressionInput.h"
#include "MaterialExpression.h"
#include "MaterialExpressionDistanceFieldGradient.generated.h"

UCLASS(Blueprintable)
class UMaterialExpressionDistanceFieldGradient : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput Position;
    
    UMaterialExpressionDistanceFieldGradient();

};


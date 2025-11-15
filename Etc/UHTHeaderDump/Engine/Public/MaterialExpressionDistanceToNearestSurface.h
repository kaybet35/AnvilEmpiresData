#pragma once
#include "CoreMinimal.h"
#include "ExpressionInput.h"
#include "MaterialExpression.h"
#include "MaterialExpressionDistanceToNearestSurface.generated.h"

UCLASS(Blueprintable)
class UMaterialExpressionDistanceToNearestSurface : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput Position;
    
    UMaterialExpressionDistanceToNearestSurface();

};


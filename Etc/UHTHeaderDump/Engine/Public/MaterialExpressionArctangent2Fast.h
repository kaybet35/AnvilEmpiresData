#pragma once
#include "CoreMinimal.h"
#include "ExpressionInput.h"
#include "MaterialExpression.h"
#include "MaterialExpressionArctangent2Fast.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UMaterialExpressionArctangent2Fast : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput Y;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput X;
    
    UMaterialExpressionArctangent2Fast();

};


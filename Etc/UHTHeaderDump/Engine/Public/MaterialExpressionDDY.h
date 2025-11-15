#pragma once
#include "CoreMinimal.h"
#include "ExpressionInput.h"
#include "MaterialExpression.h"
#include "MaterialExpressionDDY.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMaterialExpressionDDY : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput Value;
    
    UMaterialExpressionDDY();

};


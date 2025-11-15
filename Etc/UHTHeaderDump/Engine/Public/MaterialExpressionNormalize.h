#pragma once
#include "CoreMinimal.h"
#include "ExpressionInput.h"
#include "MaterialExpression.h"
#include "MaterialExpressionNormalize.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMaterialExpressionNormalize : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput VectorInput;
    
    UMaterialExpressionNormalize();

};


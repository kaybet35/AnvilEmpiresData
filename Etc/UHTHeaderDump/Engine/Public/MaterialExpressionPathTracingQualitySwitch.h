#pragma once
#include "CoreMinimal.h"
#include "ExpressionInput.h"
#include "MaterialExpression.h"
#include "MaterialExpressionPathTracingQualitySwitch.generated.h"

UCLASS(Blueprintable)
class UMaterialExpressionPathTracingQualitySwitch : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput Normal;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput PathTraced;
    
    UMaterialExpressionPathTracingQualitySwitch();

};


#pragma once
#include "CoreMinimal.h"
#include "ExpressionInput.h"
#include "MaterialExpression.h"
#include "MaterialExpressionReflectionCapturePassSwitch.generated.h"

UCLASS(Blueprintable)
class UMaterialExpressionReflectionCapturePassSwitch : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput Default;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput Reflection;
    
    UMaterialExpressionReflectionCapturePassSwitch();

};


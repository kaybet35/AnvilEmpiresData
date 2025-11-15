#pragma once
#include "CoreMinimal.h"
#include "ExpressionInput.h"
#include "MaterialExpression.h"
#include "MaterialExpressionRayTracingQualitySwitch.generated.h"

UCLASS(Blueprintable)
class UMaterialExpressionRayTracingQualitySwitch : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput Normal;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput RayTraced;
    
    UMaterialExpressionRayTracingQualitySwitch();

};


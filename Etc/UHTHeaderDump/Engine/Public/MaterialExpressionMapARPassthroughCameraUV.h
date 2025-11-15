#pragma once
#include "CoreMinimal.h"
#include "ExpressionInput.h"
#include "MaterialExpression.h"
#include "MaterialExpressionMapARPassthroughCameraUV.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UMaterialExpressionMapARPassthroughCameraUV : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput Coordinates;
    
    UMaterialExpressionMapARPassthroughCameraUV();

};


#pragma once
#include "CoreMinimal.h"
#include "ExpressionInput.h"
#include "MaterialExpression.h"
#include "MaterialExpressionVirtualTextureFeatureSwitch.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UMaterialExpressionVirtualTextureFeatureSwitch : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput No;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput Yes;
    
    UMaterialExpressionVirtualTextureFeatureSwitch();

};


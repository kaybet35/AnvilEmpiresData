#pragma once
#include "CoreMinimal.h"
#include "ExpressionInput.h"
#include "MaterialExpression.h"
#include "MaterialExpressionRuntimeVirtualTextureReplace.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UMaterialExpressionRuntimeVirtualTextureReplace : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput Default;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput VirtualTextureOutput;
    
    UMaterialExpressionRuntimeVirtualTextureReplace();

};


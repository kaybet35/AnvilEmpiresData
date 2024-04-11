#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=MaterialExpression -FallbackName=MaterialExpression
#include "MaterialExpressionLandscapeVisibilityMask.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class LANDSCAPE_API UMaterialExpressionLandscapeVisibilityMask : public UMaterialExpression {
    GENERATED_BODY()
public:
    UMaterialExpressionLandscapeVisibilityMask();

};


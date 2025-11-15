#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "MaterialExpressionPixelDepth.generated.h"

UCLASS(Blueprintable, CollapseCategories, MinimalAPI)
class UMaterialExpressionPixelDepth : public UMaterialExpression {
    GENERATED_BODY()
public:
    UMaterialExpressionPixelDepth();

};


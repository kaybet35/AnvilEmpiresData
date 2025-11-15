#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "MaterialExpressionStrataBSDF.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, MinimalAPI)
class UMaterialExpressionStrataBSDF : public UMaterialExpression {
    GENERATED_BODY()
public:
    UMaterialExpressionStrataBSDF();

};


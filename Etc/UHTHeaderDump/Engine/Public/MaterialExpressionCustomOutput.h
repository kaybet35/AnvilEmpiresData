#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "MaterialExpressionCustomOutput.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, MinimalAPI)
class UMaterialExpressionCustomOutput : public UMaterialExpression {
    GENERATED_BODY()
public:
    UMaterialExpressionCustomOutput();

};


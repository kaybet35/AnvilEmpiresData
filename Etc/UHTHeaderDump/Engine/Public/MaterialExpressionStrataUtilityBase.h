#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "MaterialExpressionStrataUtilityBase.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, MinimalAPI)
class UMaterialExpressionStrataUtilityBase : public UMaterialExpression {
    GENERATED_BODY()
public:
    UMaterialExpressionStrataUtilityBase();

};


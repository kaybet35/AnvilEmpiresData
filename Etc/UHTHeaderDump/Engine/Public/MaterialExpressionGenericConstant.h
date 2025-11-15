#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "MaterialExpressionGenericConstant.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UMaterialExpressionGenericConstant : public UMaterialExpression {
    GENERATED_BODY()
public:
    UMaterialExpressionGenericConstant();

};


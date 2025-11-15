#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "MaterialExpressionRerouteBase.generated.h"

UCLASS(Abstract, Blueprintable)
class ENGINE_API UMaterialExpressionRerouteBase : public UMaterialExpression {
    GENERATED_BODY()
public:
    UMaterialExpressionRerouteBase();

};


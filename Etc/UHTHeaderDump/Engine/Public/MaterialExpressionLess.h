#pragma once
#include "CoreMinimal.h"
#include "MaterialExpressionBinaryOp.h"
#include "MaterialExpressionLess.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMaterialExpressionLess : public UMaterialExpressionBinaryOp {
    GENERATED_BODY()
public:
    UMaterialExpressionLess();

};


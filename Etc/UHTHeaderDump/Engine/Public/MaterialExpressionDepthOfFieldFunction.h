#pragma once
#include "CoreMinimal.h"
#include "EDepthOfFieldFunctionValue.h"
#include "ExpressionInput.h"
#include "MaterialExpression.h"
#include "MaterialExpressionDepthOfFieldFunction.generated.h"

UCLASS(Blueprintable)
class UMaterialExpressionDepthOfFieldFunction : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EDepthOfFieldFunctionValue> FunctionValue;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput Depth;
    
    UMaterialExpressionDepthOfFieldFunction();

};


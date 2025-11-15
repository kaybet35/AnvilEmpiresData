#pragma once
#include "CoreMinimal.h"
#include "ExpressionExecOutput.h"
#include "ExpressionInput.h"
#include "MaterialExpression.h"
#include "MaterialExpressionWhileLoop.generated.h"

UCLASS(Blueprintable, CollapseCategories, MinimalAPI)
class UMaterialExpressionWhileLoop : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionExecOutput LoopBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionExecOutput Completed;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput Condition;
    
    UMaterialExpressionWhileLoop();

};


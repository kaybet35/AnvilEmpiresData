#pragma once
#include "CoreMinimal.h"
#include "ExpressionExecOutput.h"
#include "ExpressionInput.h"
#include "MaterialExpression.h"
#include "MaterialExpressionIfThenElse.generated.h"

UCLASS(Blueprintable, CollapseCategories, MinimalAPI)
class UMaterialExpressionIfThenElse : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionExecOutput Then;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionExecOutput Else;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput Condition;
    
    UMaterialExpressionIfThenElse();

};


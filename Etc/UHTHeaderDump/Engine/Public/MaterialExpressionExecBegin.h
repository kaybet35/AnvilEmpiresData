#pragma once
#include "CoreMinimal.h"
#include "ExpressionExecOutput.h"
#include "MaterialExpression.h"
#include "MaterialExpressionExecBegin.generated.h"

UCLASS(Blueprintable, CollapseCategories, MinimalAPI)
class UMaterialExpressionExecBegin : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionExecOutput Exec;
    
    UMaterialExpressionExecBegin();

};


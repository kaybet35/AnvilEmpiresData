#pragma once
#include "CoreMinimal.h"
#include "ExpressionExecOutput.h"
#include "ExpressionInput.h"
#include "MaterialExpression.h"
#include "MaterialExpressionSetLocal.generated.h"

UCLASS(Blueprintable, CollapseCategories, MinimalAPI)
class UMaterialExpressionSetLocal : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionExecOutput Exec;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LocalName;
    
    UMaterialExpressionSetLocal();

};


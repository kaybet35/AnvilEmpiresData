#pragma once
#include "CoreMinimal.h"
#include "ExpressionExecOutput.generated.h"

class UMaterialExpression;

USTRUCT(BlueprintType)
struct FExpressionExecOutput {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialExpression* Expression;
    
public:
    ENGINE_API FExpressionExecOutput();
};


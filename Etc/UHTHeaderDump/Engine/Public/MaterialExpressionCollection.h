#pragma once
#include "CoreMinimal.h"
#include "MaterialExpressionCollection.generated.h"

class UMaterialExpression;
class UMaterialExpressionComment;
class UMaterialExpressionExecBegin;
class UMaterialExpressionExecEnd;

USTRUCT(BlueprintType)
struct ENGINE_API FMaterialExpressionCollection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialExpression*> Expressions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialExpressionComment*> EditorComments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialExpressionExecBegin* ExpressionExecBegin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialExpressionExecEnd* ExpressionExecEnd;
    
    FMaterialExpressionCollection();
};


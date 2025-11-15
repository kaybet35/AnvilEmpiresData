#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "MaterialExpressionComposite.generated.h"

class UMaterialExpressionPinBase;

UCLASS(Blueprintable, MinimalAPI)
class UMaterialExpressionComposite : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SubgraphName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialExpressionPinBase* InputExpressions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialExpressionPinBase* OutputExpressions;
    
    UMaterialExpressionComposite();

};


#pragma once
#include "CoreMinimal.h"
#include "ExpressionInput.h"
#include "MaterialExpressionCustomOutput.h"
#include "MaterialExpressionBentNormalCustomOutput.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UMaterialExpressionBentNormalCustomOutput : public UMaterialExpressionCustomOutput {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput Input;
    
    UMaterialExpressionBentNormalCustomOutput();

};


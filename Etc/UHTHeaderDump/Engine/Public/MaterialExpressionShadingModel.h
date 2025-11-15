#pragma once
#include "CoreMinimal.h"
#include "EMaterialShadingModel.h"
#include "MaterialExpression.h"
#include "MaterialExpressionShadingModel.generated.h"

UCLASS(Blueprintable, CollapseCategories, MinimalAPI)
class UMaterialExpressionShadingModel : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EMaterialShadingModel> ShadingModel;
    
    UMaterialExpressionShadingModel();

};


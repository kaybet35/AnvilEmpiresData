#pragma once
#include "CoreMinimal.h"
#include "EMaterialPositionTransformSource.h"
#include "ExpressionInput.h"
#include "MaterialExpression.h"
#include "MaterialExpressionTransformPosition.generated.h"

UCLASS(Blueprintable, CollapseCategories, MinimalAPI)
class UMaterialExpressionTransformPosition : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput Input;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EMaterialPositionTransformSource> TransformSourceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EMaterialPositionTransformSource> TransformType;
    
    UMaterialExpressionTransformPosition();

};


#pragma once
#include "CoreMinimal.h"
#include "EMaterialVectorCoordTransform.h"
#include "EMaterialVectorCoordTransformSource.h"
#include "ExpressionInput.h"
#include "MaterialExpression.h"
#include "MaterialExpressionTransform.generated.h"

UCLASS(Blueprintable, CollapseCategories, MinimalAPI)
class UMaterialExpressionTransform : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput Input;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EMaterialVectorCoordTransformSource> TransformSourceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EMaterialVectorCoordTransform> TransformType;
    
    UMaterialExpressionTransform();

};


#pragma once
#include "CoreMinimal.h"
#include "EMaterialAttributeBlend.h"
#include "ExpressionInput.h"
#include "MaterialAttributesInput.h"
#include "MaterialExpression.h"
#include "MaterialExpressionBlendMaterialAttributes.generated.h"

UCLASS(Blueprintable, CollapseCategories, MinimalAPI)
class UMaterialExpressionBlendMaterialAttributes : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMaterialAttributesInput A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMaterialAttributesInput B;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput Alpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EMaterialAttributeBlend::Type> PixelAttributeBlendType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EMaterialAttributeBlend::Type> VertexAttributeBlendType;
    
    UMaterialExpressionBlendMaterialAttributes();

};


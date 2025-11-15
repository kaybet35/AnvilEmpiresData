#pragma once
#include "CoreMinimal.h"
#include "EMaterialExposedTextureProperty.h"
#include "ExpressionInput.h"
#include "MaterialExpression.h"
#include "MaterialExpressionTextureProperty.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class ENGINE_API UMaterialExpressionTextureProperty : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput TextureObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EMaterialExposedTextureProperty> Property;
    
    UMaterialExpressionTextureProperty();

};


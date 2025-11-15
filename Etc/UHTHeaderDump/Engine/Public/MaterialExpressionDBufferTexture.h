#pragma once
#include "CoreMinimal.h"
#include "EDBufferTextureId.h"
#include "ExpressionInput.h"
#include "MaterialExpression.h"
#include "MaterialExpressionDBufferTexture.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UMaterialExpressionDBufferTexture : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput Coordinates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EDBufferTextureId> DBufferTextureId;
    
    UMaterialExpressionDBufferTexture();

};


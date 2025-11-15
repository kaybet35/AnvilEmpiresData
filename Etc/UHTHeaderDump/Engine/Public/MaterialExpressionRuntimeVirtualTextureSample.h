#pragma once
#include "CoreMinimal.h"
#include "ERuntimeVirtualTextureMaterialType.h"
#include "ERuntimeVirtualTextureMipValueMode.h"
#include "ERuntimeVirtualTextureTextureAddressMode.h"
#include "ExpressionInput.h"
#include "MaterialExpression.h"
#include "MaterialExpressionRuntimeVirtualTextureSample.generated.h"

class URuntimeVirtualTexture;

UCLASS(Blueprintable, CollapseCategories)
class ENGINE_API UMaterialExpressionRuntimeVirtualTextureSample : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput Coordinates;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput WorldPosition;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput MipValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URuntimeVirtualTexture* VirtualTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERuntimeVirtualTextureMaterialType MaterialType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSinglePhysicalSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAdaptive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ERuntimeVirtualTextureMipValueMode> MipValueMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ERuntimeVirtualTextureTextureAddressMode> TextureAddressMode;
    
    UMaterialExpressionRuntimeVirtualTextureSample();

};


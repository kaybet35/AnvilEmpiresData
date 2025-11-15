#pragma once
#include "CoreMinimal.h"
#include "ETextureColorChannel.h"
#include "MaterialExpressionTextureSampleParameter2D.h"
#include "MaterialExpressionAntialiasedTextureMask.generated.h"

UCLASS(Blueprintable, CollapseCategories, MinimalAPI)
class UMaterialExpressionAntialiasedTextureMask : public UMaterialExpressionTextureSampleParameter2D {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Threshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETextureColorChannel> Channel;
    
    UMaterialExpressionAntialiasedTextureMask();

};


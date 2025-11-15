#pragma once
#include "CoreMinimal.h"
#include "MaterialExpressionTextureSampleParameter2D.h"
#include "MaterialExpressionTextureSampleParameterSubUV.generated.h"

UCLASS(Blueprintable, CollapseCategories, MinimalAPI)
class UMaterialExpressionTextureSampleParameterSubUV : public UMaterialExpressionTextureSampleParameter2D {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bBlend: 1;
    
    UMaterialExpressionTextureSampleParameterSubUV();

};


#pragma once
#include "CoreMinimal.h"
#include "MaterialExpressionTextureSampleParameter.h"
#include "MaterialExpressionTextureObjectParameter.generated.h"

UCLASS(Blueprintable, CollapseCategories, MinimalAPI)
class UMaterialExpressionTextureObjectParameter : public UMaterialExpressionTextureSampleParameter {
    GENERATED_BODY()
public:
    UMaterialExpressionTextureObjectParameter();

};


#pragma once
#include "CoreMinimal.h"
#include "MaterialExpressionTextureSampleParameter.h"
#include "MaterialExpressionTextureSampleParameterVolume.generated.h"

UCLASS(Blueprintable, CollapseCategories, MinimalAPI)
class UMaterialExpressionTextureSampleParameterVolume : public UMaterialExpressionTextureSampleParameter {
    GENERATED_BODY()
public:
    UMaterialExpressionTextureSampleParameterVolume();

};


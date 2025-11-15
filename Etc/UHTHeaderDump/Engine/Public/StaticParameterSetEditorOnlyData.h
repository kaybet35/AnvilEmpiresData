#pragma once
#include "CoreMinimal.h"
#include "MaterialLayersFunctionsEditorOnlyData.h"
#include "StaticComponentMaskParameter.h"
#include "StaticSwitchParameter.h"
#include "StaticTerrainLayerWeightParameter.h"
#include "StaticParameterSetEditorOnlyData.generated.h"

USTRUCT(BlueprintType)
struct FStaticParameterSetEditorOnlyData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStaticSwitchParameter> StaticSwitchParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStaticComponentMaskParameter> StaticComponentMaskParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStaticTerrainLayerWeightParameter> TerrainLayerWeightParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMaterialLayersFunctionsEditorOnlyData MaterialLayers;
    
    ENGINE_API FStaticParameterSetEditorOnlyData();
};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "MaterialCachedParameterEditorEntry.h"
#include "MaterialCachedParameterEntry.h"
#include "MaterialLayersFunctionsEditorOnlyData.h"
#include "ParameterChannelNames.h"
#include "StaticComponentMaskValue.h"
#include "MaterialCachedExpressionEditorOnlyData.generated.h"

class UCurveLinearColor;
class UCurveLinearColorAtlas;

USTRUCT(BlueprintType)
struct FMaterialCachedExpressionEditorOnlyData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMaterialCachedParameterEntry EditorOnlyEntries[2];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMaterialCachedParameterEditorEntry EditorEntries[8];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> StaticSwitchValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStaticComponentMaskValue> StaticComponentMaskValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector2D> ScalarMinMaxValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UCurveLinearColor>> ScalarCurveValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UCurveLinearColorAtlas>> ScalarCurveAtlasValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FParameterChannelNames> VectorChannelNameValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> VectorUsedAsChannelMaskValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FParameterChannelNames> TextureChannelNameValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMaterialLayersFunctionsEditorOnlyData MaterialLayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> AssetPaths;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> LandscapeLayerNames;
    
    ENGINE_API FMaterialCachedExpressionEditorOnlyData();
};


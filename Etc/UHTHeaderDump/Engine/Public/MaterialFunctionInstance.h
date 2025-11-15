#pragma once
#include "CoreMinimal.h"
#include "DoubleVectorParameterValue.h"
#include "FontParameterValue.h"
#include "MaterialFunctionInterface.h"
#include "RuntimeVirtualTextureParameterValue.h"
#include "ScalarParameterValue.h"
#include "StaticComponentMaskParameter.h"
#include "StaticSwitchParameter.h"
#include "TextureParameterValue.h"
#include "VectorParameterValue.h"
#include "MaterialFunctionInstance.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMaterialFunctionInstance : public UMaterialFunctionInterface {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialFunctionInterface* Parent;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialFunctionInterface* Base;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FScalarParameterValue> ScalarParameterValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVectorParameterValue> VectorParameterValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDoubleVectorParameterValue> DoubleVectorParameterValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTextureParameterValue> TextureParameterValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFontParameterValue> FontParameterValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStaticSwitchParameter> StaticSwitchParameterValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStaticComponentMaskParameter> StaticComponentMaskParameterValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRuntimeVirtualTextureParameterValue> RuntimeVirtualTextureParameterValues;
    
    UMaterialFunctionInstance();

};


#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AssetUserData -FallbackName=AssetUserData
#include "EGLTFMaterialPropertyGroup.h"
#include "GLTFOverrideMaterialBakeSettings.h"
#include "GLTFMaterialExportOptions.generated.h"

class UMaterialInterface;

UCLASS(Blueprintable, EditInlineNew)
class GLTFEXPORTER_API UGLTFMaterialExportOptions : public UAssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* Proxy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGLTFOverrideMaterialBakeSettings Default;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EGLTFMaterialPropertyGroup, FGLTFOverrideMaterialBakeSettings> Inputs;
    
    UGLTFMaterialExportOptions();

};


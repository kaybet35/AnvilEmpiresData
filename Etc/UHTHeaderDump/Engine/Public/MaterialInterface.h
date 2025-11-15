#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "BlendableInterface.h"
#include "EBlendMode.h"
#include "EMaterialParameterAssociation.h"
#include "Interface_AssetUserData.h"
#include "LightmassMaterialInterfaceSettings.h"
#include "MaterialParameterInfo.h"
#include "MaterialTextureInfo.h"
#include "MaterialInterface.generated.h"

class UAssetUserData;
class UMaterial;
class UMaterialFunctionInterface;
class UPhysicalMaterial;
class UPhysicalMaterialMask;
class USubsurfaceProfile;

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UMaterialInterface : public UObject, public IBlendableInterface, public IInterface_AssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USubsurfaceProfile* SubsurfaceProfile;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLightmassMaterialInterfaceSettings LightmassSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMaterialTextureInfo> TextureStreamingData;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAssetUserData*> AssetUserData;
    
public:
    UMaterialInterface();

    UFUNCTION(BlueprintCallable)
    void SetForceMipLevelsToBeResident(bool OverrideForceMiplevelsToBeResident, bool bForceMiplevelsToBeResidentValue, float ForceDuration, int32 CinematicTextureGroups, bool bFastResponse);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPhysicalMaterialMask* GetPhysicalMaterialMask() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPhysicalMaterial* GetPhysicalMaterialFromMap(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPhysicalMaterial* GetPhysicalMaterial() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMaterialParameterInfo GetParameterInfo(TEnumAsByte<EMaterialParameterAssociation> Association, FName ParameterName, UMaterialFunctionInterface* LayerFunction) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<EBlendMode> GetBlendMode() const;
    
    UFUNCTION(BlueprintCallable)
    UMaterial* GetBaseMaterial();
    

    // Fix for true pure virtual functions not being implemented
};


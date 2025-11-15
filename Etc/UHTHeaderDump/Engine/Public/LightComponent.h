#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "LightComponentBase.h"
#include "LightingChannels.h"
#include "LightComponent.generated.h"

class UMaterialInterface;
class UTextureLightProfile;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENGINE_API ULightComponent : public ULightComponentBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float Temperature;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDrawDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistanceFadeRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseTemperature: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ShadowMapChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinRoughness;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpecularScale;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShadowResolutionScale;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShadowBias;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShadowSlopeBias;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShadowSharpen;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ContactShadowLength;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 ContactShadowLengthInWS: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 InverseSquaredFalloff: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 CastTranslucentShadows: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCastShadowsFromCinematicObjectsOnly: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAffectDynamicIndirectLighting: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bForceCachedShadowsForMovablePrimitives: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLightingChannels LightingChannels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* LightFunctionMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LightFunctionScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureLightProfile* IESTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseIESBrightness: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float IESBrightnessScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LightFunctionFadeDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisabledBrightness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnableLightShaftBloom: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BloomScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BloomThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BloomMaxBrightness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor BloomTint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseRayTracedDistanceFieldShadows;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RayStartOffsetDepthScale;
    
    ULightComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetVolumetricScatteringIntensity(float NewIntensity);
    
    UFUNCTION(BlueprintCallable)
    void SetUseTemperature(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetUseIESBrightness(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetTransmission(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetTemperature(float NewTemperature);
    
    UFUNCTION(BlueprintCallable)
    void SetSpecularScale(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetShadowSlopeBias(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetShadowBias(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetLightingChannels(bool bChannel0, bool bChannel1, bool bChannel2);
    
    UFUNCTION(BlueprintCallable)
    void SetLightFunctionScale(FVector NewLightFunctionScale);
    
    UFUNCTION(BlueprintCallable)
    void SetLightFunctionMaterial(UMaterialInterface* NewLightFunctionMaterial);
    
    UFUNCTION(BlueprintCallable)
    void SetLightFunctionFadeDistance(float NewLightFunctionFadeDistance);
    
    UFUNCTION(BlueprintCallable)
    void SetLightFunctionDisabledBrightness(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetLightFColor(FColor NewLightColor);
    
    UFUNCTION(BlueprintCallable)
    void SetLightColor(FLinearColor NewLightColor, bool bSRGB);
    
    UFUNCTION(BlueprintCallable)
    void SetIntensity(float NewIntensity);
    
    UFUNCTION(BlueprintCallable)
    void SetIndirectLightingIntensity(float NewIntensity);
    
    UFUNCTION(BlueprintCallable)
    void SetIESTexture(UTextureLightProfile* NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetIESBrightnessScale(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetForceCachedShadowsForMovablePrimitives(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableLightShaftBloom(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetBloomTint(FColor NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetBloomThreshold(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetBloomScale(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetBloomMaxBrightness(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetAffectTranslucentLighting(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetAffectDynamicIndirectLighting(bool bNewValue);
    
};


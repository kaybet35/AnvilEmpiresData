#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "ExponentialHeightFogData.h"
#include "SceneComponent.h"
#include "ExponentialHeightFogComponent.generated.h"

class UTextureCube;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENGINE_API UExponentialHeightFogComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float FogDensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float FogHeightFalloff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExponentialHeightFogData SecondFogData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor FogInscatteringColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor FogInscatteringLuminance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor SkyAtmosphereAmbientContributionColorScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureCube* InscatteringColorCubemap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InscatteringColorCubemapAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor InscatteringTextureTint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FullyDirectionalInscatteringColorDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NonDirectionalInscatteringColorDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float DirectionalInscatteringExponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float DirectionalInscatteringStartDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor DirectionalInscatteringColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor DirectionalInscatteringLuminance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float FogMaxOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float StartDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FogCutoffDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableVolumetricFog;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VolumetricFogScatteringDistribution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor VolumetricFogAlbedo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor VolumetricFogEmissive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VolumetricFogExtinctionScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VolumetricFogDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float VolumetricFogStartDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VolumetricFogNearFadeInDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VolumetricFogStaticLightingScatteringIntensity;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideLightColorsWithFogInscatteringColors;
    
    UExponentialHeightFogComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetVolumetricFogScatteringDistribution(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetVolumetricFogExtinctionScale(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetVolumetricFogEmissive(FLinearColor NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetVolumetricFogDistance(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetVolumetricFogAlbedo(FColor NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetVolumetricFog(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetStartDistance(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetSecondFogHeightOffset(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetSecondFogHeightFalloff(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetSecondFogDensity(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetSecondFogData(FExponentialHeightFogData NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetNonDirectionalInscatteringColorDistance(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetInscatteringTextureTint(FLinearColor Value);
    
    UFUNCTION(BlueprintCallable)
    void SetInscatteringColorCubemapAngle(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetInscatteringColorCubemap(UTextureCube* Value);
    
    UFUNCTION(BlueprintCallable)
    void SetFullyDirectionalInscatteringColorDistance(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetFogMaxOpacity(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetFogInscatteringColor(FLinearColor Value);
    
    UFUNCTION(BlueprintCallable)
    void SetFogHeightFalloff(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetFogDensity(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetFogCutoffDistance(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetDirectionalInscatteringStartDistance(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetDirectionalInscatteringExponent(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetDirectionalInscatteringColor(FLinearColor Value);
    
};


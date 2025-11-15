#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ESkyAtmosphereTransformMode.h"
#include "SceneComponent.h"
#include "TentDistribution.h"
#include "SkyAtmosphereComponent.generated.h"

class UDirectionalLightComponent;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USkyAtmosphereComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    ESkyAtmosphereTransformMode TransformMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float BottomRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FColor GroundAlbedo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float AtmosphereHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float MultiScatteringFactor;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TraceSampleCountScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float RayleighScatteringScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor RayleighScattering;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float RayleighExponentialDistribution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float MieScatteringScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor MieScattering;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float MieAbsorptionScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor MieAbsorption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float MieAnisotropy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float MieExponentialDistribution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float OtherAbsorptionScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor OtherAbsorption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTentDistribution OtherTentDistribution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor SkyLuminanceFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float AerialPespectiveViewDistanceScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float HeightFogContribution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float TransmittanceMinLightElevationAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float AerialPerspectiveStartDepth;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid bStaticLightingBuiltGUID;
    
public:
    USkyAtmosphereComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSkyLuminanceFactor(FLinearColor NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetRayleighScatteringScale(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetRayleighScattering(FLinearColor NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetRayleighExponentialDistribution(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetOtherAbsorptionScale(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetOtherAbsorption(FLinearColor NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMultiScatteringFactor(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMieScatteringScale(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMieScattering(FLinearColor NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMieExponentialDistribution(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMieAnisotropy(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMieAbsorptionScale(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMieAbsorption(FLinearColor NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetHeightFogContribution(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetAtmosphereHeight(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetAerialPespectiveViewDistanceScale(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void OverrideAtmosphereLightDirection(int32 AtmosphereLightIndex, const FVector& LightDirection);
    
    UFUNCTION(BlueprintCallable)
    FLinearColor GetAtmosphereTransmitanceOnGroundAtPlanetTop(UDirectionalLightComponent* DirectionalLight);
    
};


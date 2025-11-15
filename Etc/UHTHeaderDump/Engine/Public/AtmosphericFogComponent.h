#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "SkyAtmosphereComponent.h"
#include "AtmosphericFogComponent.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI, NotPlaceable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UAtmosphericFogComponent : public USkyAtmosphereComponent {
    GENERATED_BODY()
public:
    UAtmosphericFogComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSunMultiplier(float NewSunMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void SetStartDistance(float NewStartDistance);
    
    UFUNCTION(BlueprintCallable)
    void SetPrecomputeParams(float DensityHeight, int32 MaxScatteringOrder, int32 InscatterAltitudeSampleNum);
    
    UFUNCTION(BlueprintCallable)
    void SetFogMultiplier(float NewFogMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void SetDistanceScale(float NewDistanceScale);
    
    UFUNCTION(BlueprintCallable)
    void SetDistanceOffset(float NewDistanceOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetDensityOffset(float NewDensityOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetDensityMultiplier(float NewDensityMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultLightColor(FLinearColor NewLightColor);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultBrightness(float NewBrightness);
    
    UFUNCTION(BlueprintCallable)
    void SetAltitudeScale(float NewAltitudeScale);
    
    UFUNCTION(BlueprintCallable)
    void DisableSunDisk(bool NewSunDisk);
    
    UFUNCTION(BlueprintCallable)
    void DisableGroundScattering(bool NewGroundScattering);
    
};


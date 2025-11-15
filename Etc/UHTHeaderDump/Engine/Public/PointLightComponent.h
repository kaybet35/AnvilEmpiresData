#pragma once
#include "CoreMinimal.h"
#include "LocalLightComponent.h"
#include "PointLightComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENGINE_API UPointLightComponent : public ULocalLightComponent {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseInverseSquaredFalloff: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float LightFalloffExponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float SourceRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float SoftSourceRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float SourceLength;
    
    UPointLightComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetUseInverseSquaredFalloff(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSourceRadius(float bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSourceLength(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetSoftSourceRadius(float bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetLightFalloffExponent(float NewLightFalloffExponent);
    
    UFUNCTION(BlueprintCallable)
    void SetInverseExposureBlend(float NewInverseExposureBlend);
    
};


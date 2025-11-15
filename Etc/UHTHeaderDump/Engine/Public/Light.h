#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Actor.h"
#include "Light.generated.h"

class ULightComponent;
class UMaterialInterface;

UCLASS(Abstract, Blueprintable)
class ENGINE_API ALight : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULightComponent* LightComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bEnabled, meta=(AllowPrivateAccess=true))
    uint8 bEnabled: 1;
    
    ALight(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void ToggleEnabled();
    
    UFUNCTION(BlueprintCallable)
    void SetLightFunctionScale(FVector NewLightFunctionScale);
    
    UFUNCTION(BlueprintCallable)
    void SetLightFunctionMaterial(UMaterialInterface* NewLightFunctionMaterial);
    
    UFUNCTION(BlueprintCallable)
    void SetLightFunctionFadeDistance(float NewLightFunctionFadeDistance);
    
    UFUNCTION(BlueprintCallable)
    void SetLightColor(FLinearColor NewLightColor);
    
    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool bSetEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetCastShadows(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetBrightness(float NewBrightness);
    
    UFUNCTION(BlueprintCallable)
    void SetAffectTranslucentLighting(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bEnabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetLightColor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBrightness() const;
    
};


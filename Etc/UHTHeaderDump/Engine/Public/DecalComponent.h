#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "SceneComponent.h"
#include "DecalComponent.generated.h"

class UMaterialInstanceDynamic;
class UMaterialInterface;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENGINE_API UDecalComponent : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* DecalMaterial;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SortOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeScreenSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeStartDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeInDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeInStartDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDestroyOwnerAfterFade: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DecalSize;
    
    UDecalComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSortOrder(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetFadeScreenSize(float NewFadeScreenSize);
    
    UFUNCTION(BlueprintCallable)
    void SetFadeOut(float StartDelay, float Duration, bool DestroyOwnerAfterFade);
    
    UFUNCTION(BlueprintCallable)
    void SetFadeIn(float StartDelay, float Duaration);
    
    UFUNCTION(BlueprintCallable)
    void SetDecalMaterial(UMaterialInterface* NewDecalMaterial);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFadeStartDelay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFadeInStartDelay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFadeInDuration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFadeDuration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMaterialInterface* GetDecalMaterial() const;
    
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* CreateDynamicMaterialInstance();
    
};


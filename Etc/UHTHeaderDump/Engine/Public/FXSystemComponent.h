#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EAttachmentRule.h"
#include "PrimitiveComponent.h"
#include "FXSystemComponent.generated.h"

class AActor;
class UFXSystemAsset;
class USceneComponent;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENGINE_API UFXSystemComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UFXSystemComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetVectorParameter(FName ParameterName, FVector Param);
    
    UFUNCTION(BlueprintCallable)
    void SetUseAutoManageAttachment(bool bAutoManage);
    
    UFUNCTION(BlueprintCallable)
    void SetIntParameter(FName ParameterName, int32 Param);
    
    UFUNCTION(BlueprintCallable)
    void SetFloatParameter(FName ParameterName, float Param);
    
    UFUNCTION(BlueprintCallable)
    void SetEmitterEnable(FName EmitterName, bool bNewEnableState);
    
    UFUNCTION(BlueprintCallable)
    void SetColorParameter(FName ParameterName, FLinearColor Param);
    
    UFUNCTION(BlueprintCallable)
    void SetBoolParameter(FName ParameterName, bool Param);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoAttachmentParameters(USceneComponent* Parent, FName SocketName, EAttachmentRule LocationRule, EAttachmentRule RotationRule, EAttachmentRule ScaleRule);
    
    UFUNCTION(BlueprintCallable)
    void SetActorParameter(FName ParameterName, AActor* Param);
    
    UFUNCTION(BlueprintCallable)
    void ReleaseToPool();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFXSystemAsset* GetFXSystemAsset() const;
    
};


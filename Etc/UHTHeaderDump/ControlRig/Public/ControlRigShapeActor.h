#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "ControlRigShapeActor.generated.h"

class UControlRig;
class USceneComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable, NotPlaceable, Transient)
class CONTROLRIG_API AControlRigShapeActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* ActorRootComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMeshComponent;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 ControlRigIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UControlRig> ControlRig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ControlName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ShapeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ColorParameterName;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSelected: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHovered: 1;
    
public:
    AControlRigShapeActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSelected(bool bInSelected);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectable(bool bInSelectable);
    
    UFUNCTION(BlueprintCallable)
    void SetHovered(bool bInHovered);
    
    UFUNCTION(BlueprintCallable)
    void SetGlobalTransform(const FTransform& InTransform);
    
    UFUNCTION(BlueprintCallable)
    void SetEnabled(bool bInEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTransformChanged(const FTransform& NewTransform);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSelectionChanged(bool bIsSelected);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnManipulatingChanged(bool bIsManipulating);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHoveredChanged(bool bIsSelected);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnabledChanged(bool bIsEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSelectedInEditor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHovered() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetGlobalTransform() const;
    
};


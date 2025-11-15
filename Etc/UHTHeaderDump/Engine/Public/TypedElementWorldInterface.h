#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=BoxSphereBounds -FallbackName=BoxSphereBounds
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=TypedElementFramework -ObjectName=ScriptTypedElementHandle -FallbackName=ScriptTypedElementHandle
#include "ETypedElementWorldType.h"
#include "TypedElementDeletionOptions.h"
#include "TypedElementWorldInterface.generated.h"

class ULevel;
class UTypedElementSelectionSet;
class UWorld;

UINTERFACE(BlueprintType, MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class UTypedElementWorldInterface : public UInterface {
    GENERATED_BODY()
};

class ITypedElementWorldInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual bool SetWorldTransform(const FScriptTypedElementHandle& InElementHandle, const FTransform& InTransform) PURE_VIRTUAL(SetWorldTransform, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool SetRelativeTransform(const FScriptTypedElementHandle& InElementHandle, const FTransform& InTransform) PURE_VIRTUAL(SetRelativeTransform, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool SetPivotOffset(const FScriptTypedElementHandle& InElementHandle, const FVector& InPivotOffset) PURE_VIRTUAL(SetPivotOffset, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual FScriptTypedElementHandle PromoteElement(const FScriptTypedElementHandle& InElementHandle, UWorld* OverrideWorld) PURE_VIRTUAL(PromoteElement, return FScriptTypedElementHandle{};);
    
    UFUNCTION(BlueprintCallable)
    virtual void NotifyMovementStarted(const FScriptTypedElementHandle& InElementHandle) PURE_VIRTUAL(NotifyMovementStarted,);
    
    UFUNCTION(BlueprintCallable)
    virtual void NotifyMovementOngoing(const FScriptTypedElementHandle& InElementHandle) PURE_VIRTUAL(NotifyMovementOngoing,);
    
    UFUNCTION(BlueprintCallable)
    virtual void NotifyMovementEnded(const FScriptTypedElementHandle& InElementHandle) PURE_VIRTUAL(NotifyMovementEnded,);
    
    UFUNCTION(BlueprintCallable)
    virtual bool IsTemplateElement(const FScriptTypedElementHandle& InElementHandle) PURE_VIRTUAL(IsTemplateElement, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool GetWorldTransform(const FScriptTypedElementHandle& InElementHandle, FTransform& OutTransform) PURE_VIRTUAL(GetWorldTransform, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool GetRelativeTransform(const FScriptTypedElementHandle& InElementHandle, FTransform& OutTransform) PURE_VIRTUAL(GetRelativeTransform, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool GetPivotOffset(const FScriptTypedElementHandle& InElementHandle, FVector& OutPivotOffset) PURE_VIRTUAL(GetPivotOffset, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual UWorld* GetOwnerWorld(const FScriptTypedElementHandle& InElementHandle) PURE_VIRTUAL(GetOwnerWorld, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    virtual ULevel* GetOwnerLevel(const FScriptTypedElementHandle& InElementHandle) PURE_VIRTUAL(GetOwnerLevel, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool GetBounds(const FScriptTypedElementHandle& InElementHandle, FBoxSphereBounds& OutBounds) PURE_VIRTUAL(GetBounds, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual FScriptTypedElementHandle DuplicateElement(const FScriptTypedElementHandle& InElementHandle, UWorld* InWorld, const FVector& InLocationOffset) PURE_VIRTUAL(DuplicateElement, return FScriptTypedElementHandle{};);
    
    UFUNCTION(BlueprintCallable)
    virtual bool DeleteElement(const FScriptTypedElementHandle& InElementHandle, UWorld* InWorld, UTypedElementSelectionSet* InSelectionSet, const FTypedElementDeletionOptions& InDeletionOptions) PURE_VIRTUAL(DeleteElement, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool CanPromoteElement(const FScriptTypedElementHandle& InElementHandle) PURE_VIRTUAL(CanPromoteElement, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool CanMoveElement(const FScriptTypedElementHandle& InElementHandle, const ETypedElementWorldType InWorldType) PURE_VIRTUAL(CanMoveElement, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool CanEditElement(const FScriptTypedElementHandle& InElementHandle) PURE_VIRTUAL(CanEditElement, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool CanDuplicateElement(const FScriptTypedElementHandle& InElementHandle) PURE_VIRTUAL(CanDuplicateElement, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool CanDeleteElement(const FScriptTypedElementHandle& InElementHandle) PURE_VIRTUAL(CanDeleteElement, return false;);
    
};


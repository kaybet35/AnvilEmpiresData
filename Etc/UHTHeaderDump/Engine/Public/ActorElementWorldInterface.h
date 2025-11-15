#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=BoxSphereBounds -FallbackName=BoxSphereBounds
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=TypedElementFramework -ObjectName=ScriptTypedElementHandle -FallbackName=ScriptTypedElementHandle
#include "ETypedElementWorldType.h"
#include "TypedElementDeletionOptions.h"
#include "TypedElementWorldInterface.h"
#include "ActorElementWorldInterface.generated.h"

class ULevel;
class UTypedElementSelectionSet;
class UWorld;

UCLASS(Blueprintable)
class ENGINE_API UActorElementWorldInterface : public UObject, public ITypedElementWorldInterface {
    GENERATED_BODY()
public:
    UActorElementWorldInterface();


    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    bool SetWorldTransform(const FScriptTypedElementHandle& InElementHandle, const FTransform& InTransform) override PURE_VIRTUAL(SetWorldTransform, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool SetRelativeTransform(const FScriptTypedElementHandle& InElementHandle, const FTransform& InTransform) override PURE_VIRTUAL(SetRelativeTransform, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool SetPivotOffset(const FScriptTypedElementHandle& InElementHandle, const FVector& InPivotOffset) override PURE_VIRTUAL(SetPivotOffset, return false;);
    
    UFUNCTION(BlueprintCallable)
    FScriptTypedElementHandle PromoteElement(const FScriptTypedElementHandle& InElementHandle, UWorld* OverrideWorld) override PURE_VIRTUAL(PromoteElement, return FScriptTypedElementHandle{};);
    
    UFUNCTION(BlueprintCallable)
    void NotifyMovementStarted(const FScriptTypedElementHandle& InElementHandle) override PURE_VIRTUAL(NotifyMovementStarted,);
    
    UFUNCTION(BlueprintCallable)
    void NotifyMovementOngoing(const FScriptTypedElementHandle& InElementHandle) override PURE_VIRTUAL(NotifyMovementOngoing,);
    
    UFUNCTION(BlueprintCallable)
    void NotifyMovementEnded(const FScriptTypedElementHandle& InElementHandle) override PURE_VIRTUAL(NotifyMovementEnded,);
    
    UFUNCTION(BlueprintCallable)
    bool IsTemplateElement(const FScriptTypedElementHandle& InElementHandle) override PURE_VIRTUAL(IsTemplateElement, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool GetWorldTransform(const FScriptTypedElementHandle& InElementHandle, FTransform& OutTransform) override PURE_VIRTUAL(GetWorldTransform, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool GetRelativeTransform(const FScriptTypedElementHandle& InElementHandle, FTransform& OutTransform) override PURE_VIRTUAL(GetRelativeTransform, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool GetPivotOffset(const FScriptTypedElementHandle& InElementHandle, FVector& OutPivotOffset) override PURE_VIRTUAL(GetPivotOffset, return false;);
    
    UFUNCTION(BlueprintCallable)
    UWorld* GetOwnerWorld(const FScriptTypedElementHandle& InElementHandle) override PURE_VIRTUAL(GetOwnerWorld, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    ULevel* GetOwnerLevel(const FScriptTypedElementHandle& InElementHandle) override PURE_VIRTUAL(GetOwnerLevel, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    bool GetBounds(const FScriptTypedElementHandle& InElementHandle, FBoxSphereBounds& OutBounds) override PURE_VIRTUAL(GetBounds, return false;);
    
    UFUNCTION(BlueprintCallable)
    FScriptTypedElementHandle DuplicateElement(const FScriptTypedElementHandle& InElementHandle, UWorld* InWorld, const FVector& InLocationOffset) override PURE_VIRTUAL(DuplicateElement, return FScriptTypedElementHandle{};);
    
    UFUNCTION(BlueprintCallable)
    bool DeleteElement(const FScriptTypedElementHandle& InElementHandle, UWorld* InWorld, UTypedElementSelectionSet* InSelectionSet, const FTypedElementDeletionOptions& InDeletionOptions) override PURE_VIRTUAL(DeleteElement, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool CanPromoteElement(const FScriptTypedElementHandle& InElementHandle) override PURE_VIRTUAL(CanPromoteElement, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool CanMoveElement(const FScriptTypedElementHandle& InElementHandle, const ETypedElementWorldType InWorldType) override PURE_VIRTUAL(CanMoveElement, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool CanEditElement(const FScriptTypedElementHandle& InElementHandle) override PURE_VIRTUAL(CanEditElement, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool CanDuplicateElement(const FScriptTypedElementHandle& InElementHandle) override PURE_VIRTUAL(CanDuplicateElement, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool CanDeleteElement(const FScriptTypedElementHandle& InElementHandle) override PURE_VIRTUAL(CanDeleteElement, return false;);
    
};


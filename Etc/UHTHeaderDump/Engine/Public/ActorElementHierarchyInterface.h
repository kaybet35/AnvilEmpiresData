#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=TypedElementFramework -ObjectName=ScriptTypedElementHandle -FallbackName=ScriptTypedElementHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=TypedElementRuntime -ObjectName=TypedElementHierarchyInterface -FallbackName=TypedElementHierarchyInterface
#include "ActorElementHierarchyInterface.generated.h"

UCLASS(Blueprintable)
class ENGINE_API UActorElementHierarchyInterface : public UObject, public ITypedElementHierarchyInterface {
    GENERATED_BODY()
public:
    UActorElementHierarchyInterface();


    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    FScriptTypedElementHandle GetParentElement(const FScriptTypedElementHandle& InElementHandle, const bool bAllowCreate) override PURE_VIRTUAL(GetParentElement, return FScriptTypedElementHandle{};);
    
    UFUNCTION(BlueprintCallable)
    void GetChildElements(const FScriptTypedElementHandle& InElementHandle, TArray<FScriptTypedElementHandle>& OutElementHandles, const bool bAllowCreate) override PURE_VIRTUAL(GetChildElements,);
    
};


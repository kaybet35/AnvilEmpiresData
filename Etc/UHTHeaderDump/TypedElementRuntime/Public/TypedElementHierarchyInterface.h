#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=TypedElementFramework -ObjectName=ScriptTypedElementHandle -FallbackName=ScriptTypedElementHandle
#include "TypedElementHierarchyInterface.generated.h"

UINTERFACE(BlueprintType, MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class UTypedElementHierarchyInterface : public UInterface {
    GENERATED_BODY()
};

class ITypedElementHierarchyInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual FScriptTypedElementHandle GetParentElement(const FScriptTypedElementHandle& InElementHandle, const bool bAllowCreate) PURE_VIRTUAL(GetParentElement, return FScriptTypedElementHandle{};);
    
    UFUNCTION(BlueprintCallable)
    virtual void GetChildElements(const FScriptTypedElementHandle& InElementHandle, TArray<FScriptTypedElementHandle>& OutElementHandles, const bool bAllowCreate) PURE_VIRTUAL(GetChildElements,);
    
};


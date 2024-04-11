#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=TypedElementFramework -ObjectName=ScriptTypedElementHandle -FallbackName=ScriptTypedElementHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=TypedElementFramework -ObjectName=ScriptTypedElementListProxy -FallbackName=ScriptTypedElementListProxy
#include "ETypedElementSelectionMethod.h"
#include "TypedElementIsSelectedOptions.h"
#include "TypedElementSelectionOptions.h"
#include "TypedElementSelectionInterface.generated.h"

UINTERFACE(BlueprintType, MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class UTypedElementSelectionInterface : public UInterface {
    GENERATED_BODY()
};

class ITypedElementSelectionInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual bool SelectElement(const FScriptTypedElementHandle& InElementHandle, FScriptTypedElementListProxy InSelectionSet, const FTypedElementSelectionOptions& InSelectionOptions) PURE_VIRTUAL(SelectElement, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool IsElementSelected(const FScriptTypedElementHandle& InElementHandle, const FScriptTypedElementListProxy InSelectionSet, const FTypedElementIsSelectedOptions& InSelectionOptions) PURE_VIRTUAL(IsElementSelected, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual FScriptTypedElementHandle GetSelectionElement(const FScriptTypedElementHandle& InElementHandle, const FScriptTypedElementListProxy InCurrentSelection, const ETypedElementSelectionMethod InSelectionMethod) PURE_VIRTUAL(GetSelectionElement, return FScriptTypedElementHandle{};);
    
    UFUNCTION(BlueprintCallable)
    virtual bool DeselectElement(const FScriptTypedElementHandle& InElementHandle, FScriptTypedElementListProxy InSelectionSet, const FTypedElementSelectionOptions& InSelectionOptions) PURE_VIRTUAL(DeselectElement, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool CanSelectElement(const FScriptTypedElementHandle& InElementHandle, const FTypedElementSelectionOptions& InSelectionOptions) PURE_VIRTUAL(CanSelectElement, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool CanDeselectElement(const FScriptTypedElementHandle& InElementHandle, const FTypedElementSelectionOptions& InSelectionOptions) PURE_VIRTUAL(CanDeselectElement, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool AllowSelectionModifiers(const FScriptTypedElementHandle& InElementHandle, const FScriptTypedElementListProxy InSelectionSet) PURE_VIRTUAL(AllowSelectionModifiers, return false;);
    
};


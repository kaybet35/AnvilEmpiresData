#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=TypedElementFramework -ObjectName=ScriptTypedElementHandle -FallbackName=ScriptTypedElementHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=TypedElementFramework -ObjectName=ScriptTypedElementListProxy -FallbackName=ScriptTypedElementListProxy
//CROSS-MODULE INCLUDE V2: -ModuleName=TypedElementRuntime -ObjectName=ETypedElementSelectionMethod -FallbackName=ETypedElementSelectionMethod
//CROSS-MODULE INCLUDE V2: -ModuleName=TypedElementRuntime -ObjectName=TypedElementIsSelectedOptions -FallbackName=TypedElementIsSelectedOptions
//CROSS-MODULE INCLUDE V2: -ModuleName=TypedElementRuntime -ObjectName=TypedElementSelectionInterface -FallbackName=TypedElementSelectionInterface
//CROSS-MODULE INCLUDE V2: -ModuleName=TypedElementRuntime -ObjectName=TypedElementSelectionOptions -FallbackName=TypedElementSelectionOptions
#include "SMInstanceElementSelectionInterface.generated.h"

UCLASS(Blueprintable)
class ENGINE_API USMInstanceElementSelectionInterface : public UObject, public ITypedElementSelectionInterface {
    GENERATED_BODY()
public:
    USMInstanceElementSelectionInterface();


    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    bool SelectElement(const FScriptTypedElementHandle& InElementHandle, FScriptTypedElementListProxy InSelectionSet, const FTypedElementSelectionOptions& InSelectionOptions) override PURE_VIRTUAL(SelectElement, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool IsElementSelected(const FScriptTypedElementHandle& InElementHandle, const FScriptTypedElementListProxy InSelectionSet, const FTypedElementIsSelectedOptions& InSelectionOptions) override PURE_VIRTUAL(IsElementSelected, return false;);
    
    UFUNCTION(BlueprintCallable)
    FScriptTypedElementHandle GetSelectionElement(const FScriptTypedElementHandle& InElementHandle, const FScriptTypedElementListProxy InCurrentSelection, const ETypedElementSelectionMethod InSelectionMethod) override PURE_VIRTUAL(GetSelectionElement, return FScriptTypedElementHandle{};);
    
    UFUNCTION(BlueprintCallable)
    bool DeselectElement(const FScriptTypedElementHandle& InElementHandle, FScriptTypedElementListProxy InSelectionSet, const FTypedElementSelectionOptions& InSelectionOptions) override PURE_VIRTUAL(DeselectElement, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool CanSelectElement(const FScriptTypedElementHandle& InElementHandle, const FTypedElementSelectionOptions& InSelectionOptions) override PURE_VIRTUAL(CanSelectElement, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool CanDeselectElement(const FScriptTypedElementHandle& InElementHandle, const FTypedElementSelectionOptions& InSelectionOptions) override PURE_VIRTUAL(CanDeselectElement, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool AllowSelectionModifiers(const FScriptTypedElementHandle& InElementHandle, const FScriptTypedElementListProxy InSelectionSet) override PURE_VIRTUAL(AllowSelectionModifiers, return false;);
    
};


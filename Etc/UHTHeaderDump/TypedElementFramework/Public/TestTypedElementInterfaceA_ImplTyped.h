#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ScriptTypedElementHandle.h"
#include "TestTypedElementInterfaceA.h"
#include "TestTypedElementInterfaceA_ImplTyped.generated.h"

UCLASS(Blueprintable)
class UTestTypedElementInterfaceA_ImplTyped : public UObject, public ITestTypedElementInterfaceA {
    GENERATED_BODY()
public:
    UTestTypedElementInterfaceA_ImplTyped();


    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    bool SetDisplayName(const FScriptTypedElementHandle& InElementHandle, FText InNewName, bool bNotify) override PURE_VIRTUAL(SetDisplayName, return false;);
    
    UFUNCTION(BlueprintCallable)
    FText GetDisplayName(const FScriptTypedElementHandle& InElementHandle) override PURE_VIRTUAL(GetDisplayName, return FText::GetEmpty(););
    
};


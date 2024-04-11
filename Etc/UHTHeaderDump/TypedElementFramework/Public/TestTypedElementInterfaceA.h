#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "ScriptTypedElementHandle.h"
#include "TestTypedElementInterfaceA.generated.h"

UINTERFACE(BlueprintType, MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class UTestTypedElementInterfaceA : public UInterface {
    GENERATED_BODY()
};

class ITestTypedElementInterfaceA : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual bool SetDisplayName(const FScriptTypedElementHandle& InElementHandle, FText InNewName, bool bNotify) PURE_VIRTUAL(SetDisplayName, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual FText GetDisplayName(const FScriptTypedElementHandle& InElementHandle) PURE_VIRTUAL(GetDisplayName, return FText::GetEmpty(););
    
};


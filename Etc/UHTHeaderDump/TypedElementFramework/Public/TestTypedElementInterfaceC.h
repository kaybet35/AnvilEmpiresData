#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "ScriptTypedElementHandle.h"
#include "TestTypedElementInterfaceC.generated.h"

UINTERFACE(BlueprintType, MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class UTestTypedElementInterfaceC : public UInterface {
    GENERATED_BODY()
};

class ITestTypedElementInterfaceC : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual bool GetIsTested(const FScriptTypedElementHandle& InElementHandle) const PURE_VIRTUAL(GetIsTested, return false;);
    
};


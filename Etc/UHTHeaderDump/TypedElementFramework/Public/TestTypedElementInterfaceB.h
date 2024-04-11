#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "ScriptTypedElementHandle.h"
#include "TestTypedElementInterfaceB.generated.h"

UINTERFACE(BlueprintType, MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class UTestTypedElementInterfaceB : public UInterface {
    GENERATED_BODY()
};

class ITestTypedElementInterfaceB : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual bool MarkAsTested(const FScriptTypedElementHandle& InElementHandle) PURE_VIRTUAL(MarkAsTested, return false;);
    
};


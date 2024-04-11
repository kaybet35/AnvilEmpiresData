#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ScriptTypedElementHandle.h"
#include "TestTypedElementInterfaceB.h"
#include "TestTypedElementInterfaceC.h"
#include "TestTypedElementInterfaceBAndC_Typed.generated.h"

UCLASS(Blueprintable)
class UTestTypedElementInterfaceBAndC_Typed : public UObject, public ITestTypedElementInterfaceB, public ITestTypedElementInterfaceC {
    GENERATED_BODY()
public:
    UTestTypedElementInterfaceBAndC_Typed();


    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    bool MarkAsTested(const FScriptTypedElementHandle& InElementHandle) override PURE_VIRTUAL(MarkAsTested, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool GetIsTested(const FScriptTypedElementHandle& InElementHandle) const override PURE_VIRTUAL(GetIsTested, return false;);
    
};


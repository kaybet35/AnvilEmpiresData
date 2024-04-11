#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ScriptTypedElementHandle.h"
#include "TypedElementHandleLibrary.generated.h"

UCLASS(Blueprintable)
class UTypedElementHandleLibrary : public UObject {
    GENERATED_BODY()
public:
    UTypedElementHandleLibrary();

    UFUNCTION(BlueprintCallable)
    static void Release(UPARAM(Ref) FScriptTypedElementHandle& ElementHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NotEqual(const FScriptTypedElementHandle& LHS, const FScriptTypedElementHandle& RHS);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSet(const FScriptTypedElementHandle& ElementHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Equal(const FScriptTypedElementHandle& LHS, const FScriptTypedElementHandle& RHS);
    
};


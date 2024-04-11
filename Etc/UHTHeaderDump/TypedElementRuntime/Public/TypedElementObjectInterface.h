#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=TypedElementFramework -ObjectName=ScriptTypedElementHandle -FallbackName=ScriptTypedElementHandle
#include "TypedElementObjectInterface.generated.h"

class UObject;

UINTERFACE(BlueprintType, MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class UTypedElementObjectInterface : public UInterface {
    GENERATED_BODY()
};

class ITypedElementObjectInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual UClass* GetObjectClass(const FScriptTypedElementHandle& InElementHandle) PURE_VIRTUAL(GetObjectClass, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    virtual UObject* GetObject(const FScriptTypedElementHandle& InElementHandle) PURE_VIRTUAL(GetObject, return NULL;);
    
};


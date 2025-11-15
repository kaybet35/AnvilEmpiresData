#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=TypedElementFramework -ObjectName=ScriptTypedElementHandle -FallbackName=ScriptTypedElementHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=TypedElementRuntime -ObjectName=TypedElementObjectInterface -FallbackName=TypedElementObjectInterface
#include "ActorElementObjectInterface.generated.h"

UCLASS(Blueprintable)
class ENGINE_API UActorElementObjectInterface : public UObject, public ITypedElementObjectInterface {
    GENERATED_BODY()
public:
    UActorElementObjectInterface();


    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    UClass* GetObjectClass(const FScriptTypedElementHandle& InElementHandle) override PURE_VIRTUAL(GetObjectClass, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    UObject* GetObject(const FScriptTypedElementHandle& InElementHandle) override PURE_VIRTUAL(GetObject, return NULL;);
    
};


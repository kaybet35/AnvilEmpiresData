#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ScriptTypedElementHandle.h"
#include "Templates/SubclassOf.h"
#include "TypedElementRegistry.generated.h"

class IInterface;
class UInterface;
class UTypedElementRegistry;

UCLASS(Blueprintable, Transient)
class TYPEDELEMENTFRAMEWORK_API UTypedElementRegistry : public UObject {
    GENERATED_BODY()
public:
    UTypedElementRegistry();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UTypedElementRegistry* GetInstance();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObject* GetElementInterface(const FScriptTypedElementHandle& InElementHandle, const TSubclassOf<UInterface> InBaseInterfaceType) const;
    
};


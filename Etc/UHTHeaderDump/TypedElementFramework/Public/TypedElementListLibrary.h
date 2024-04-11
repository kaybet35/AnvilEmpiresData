#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ScriptTypedElementHandle.h"
#include "ScriptTypedElementListProxy.h"
#include "Templates/SubclassOf.h"
#include "TypedElementListLibrary.generated.h"

class IInterface;
class UInterface;
class UTypedElementRegistry;

UCLASS(Blueprintable)
class UTypedElementListLibrary : public UObject {
    GENERATED_BODY()
public:
    UTypedElementListLibrary();

    UFUNCTION(BlueprintCallable)
    static void Shrink(FScriptTypedElementListProxy ElementList);
    
    UFUNCTION(BlueprintCallable)
    static void Reset(FScriptTypedElementListProxy ElementList);
    
    UFUNCTION(BlueprintCallable)
    static void Reserve(FScriptTypedElementListProxy ElementList, const int32 Size);
    
    UFUNCTION(BlueprintCallable)
    static bool Remove(FScriptTypedElementListProxy ElementList, const FScriptTypedElementHandle& ElementHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 Num(const FScriptTypedElementListProxy ElementList);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValidIndex(const FScriptTypedElementListProxy ElementList, const int32 Index);
    
    UFUNCTION(BlueprintCallable)
    static bool HasElementsOfType(const FScriptTypedElementListProxy ElementList, const FName ElementTypeName);
    
    UFUNCTION(BlueprintCallable)
    static bool HasElements(const FScriptTypedElementListProxy ElementList, const TSubclassOf<UInterface> BaseInterfaceType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UObject* GetElementInterface(const FScriptTypedElementListProxy ElementList, const FScriptTypedElementHandle& ElementHandle, const TSubclassOf<UInterface> BaseInterfaceType);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FScriptTypedElementHandle> GetElementHandles(const FScriptTypedElementListProxy ElementList, const TSubclassOf<UInterface> BaseInterfaceType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FScriptTypedElementHandle GetElementHandleAt(const FScriptTypedElementListProxy ElementList, const int32 Index);
    
    UFUNCTION(BlueprintCallable)
    static void Empty(FScriptTypedElementListProxy ElementList, const int32 Slack);
    
    UFUNCTION(BlueprintCallable)
    static FScriptTypedElementListProxy CreateScriptElementList(UTypedElementRegistry* Registry);
    
    UFUNCTION(BlueprintCallable)
    static int32 CountElementsOfType(const FScriptTypedElementListProxy ElementList, const FName ElementTypeName);
    
    UFUNCTION(BlueprintCallable)
    static int32 CountElements(const FScriptTypedElementListProxy ElementList, const TSubclassOf<UInterface> BaseInterfaceType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Contains(const FScriptTypedElementListProxy ElementList, const FScriptTypedElementHandle& ElementHandle);
    
    UFUNCTION(BlueprintCallable)
    static FScriptTypedElementListProxy Clone(const FScriptTypedElementListProxy ElementList);
    
    UFUNCTION(BlueprintCallable)
    static void AppendList(FScriptTypedElementListProxy ElementList, const FScriptTypedElementListProxy OtherElementList);
    
    UFUNCTION(BlueprintCallable)
    static void Append(FScriptTypedElementListProxy ElementList, const TArray<FScriptTypedElementHandle>& ElementHandles);
    
    UFUNCTION(BlueprintCallable)
    static bool Add(FScriptTypedElementListProxy ElementList, const FScriptTypedElementHandle& ElementHandle);
    
};


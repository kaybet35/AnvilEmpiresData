#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=TypedElementFramework -ObjectName=ScriptTypedElementHandle -FallbackName=ScriptTypedElementHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=TypedElementFramework -ObjectName=ScriptTypedElementListProxy -FallbackName=ScriptTypedElementListProxy
#include "TypedElementDeletionOptions.h"
#include "TypedElementCommonActions.generated.h"

class UTypedElementSelectionSet;
class UWorld;

UCLASS(Blueprintable, Transient)
class ENGINE_API UTypedElementCommonActions : public UObject {
    GENERATED_BODY()
public:
    UTypedElementCommonActions();

    UFUNCTION(BlueprintCallable)
    TArray<FScriptTypedElementHandle> K2_DuplicateSelectedElements(const UTypedElementSelectionSet* SelectionSet, UWorld* World, const FVector& LocationOffset);
    
    UFUNCTION(BlueprintCallable)
    TArray<FScriptTypedElementHandle> DuplicateNormalizedElements(const FScriptTypedElementListProxy ElementList, UWorld* World, const FVector& LocationOffset);
    
    UFUNCTION(BlueprintCallable)
    bool DeleteSelectedElements(UTypedElementSelectionSet* SelectionSet, UWorld* World, const FTypedElementDeletionOptions& DeletionOptions);
    
    UFUNCTION(BlueprintCallable)
    bool DeleteNormalizedElements(const FScriptTypedElementListProxy ElementList, UWorld* World, UTypedElementSelectionSet* InSelectionSet, const FTypedElementDeletionOptions& DeletionOptions);
    
};


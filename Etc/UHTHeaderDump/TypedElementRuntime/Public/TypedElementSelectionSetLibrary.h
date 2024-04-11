#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=TypedElementFramework -ObjectName=ScriptTypedElementListProxy -FallbackName=ScriptTypedElementListProxy
#include "TypedElementSelectionNormalizationOptions.h"
#include "TypedElementSelectionOptions.h"
#include "TypedElementSelectionSetLibrary.generated.h"

class UTypedElementSelectionSet;

UCLASS(Blueprintable)
class UTypedElementSelectionSetLibrary : public UObject {
    GENERATED_BODY()
public:
    UTypedElementSelectionSetLibrary();

    UFUNCTION(BlueprintCallable)
    static bool SetSelectionFromList(UTypedElementSelectionSet* SelectionSet, const FScriptTypedElementListProxy ElementList, const FTypedElementSelectionOptions SelectionOptions);
    
    UFUNCTION(BlueprintCallable)
    static bool SelectElementsFromList(UTypedElementSelectionSet* SelectionSet, const FScriptTypedElementListProxy ElementList, const FTypedElementSelectionOptions SelectionOptions);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FScriptTypedElementListProxy GetNormalizedSelection(UTypedElementSelectionSet* SelectionSet, const FTypedElementSelectionNormalizationOptions NormalizationOptions);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FScriptTypedElementListProxy GetNormalizedElementList(UTypedElementSelectionSet* SelectionSet, const FScriptTypedElementListProxy ElementList, const FTypedElementSelectionNormalizationOptions NormalizationOptions);
    
    UFUNCTION(BlueprintCallable)
    static bool DeselectElementsFromList(UTypedElementSelectionSet* SelectionSet, const FScriptTypedElementListProxy ElementList, const FTypedElementSelectionOptions SelectionOptions);
    
};


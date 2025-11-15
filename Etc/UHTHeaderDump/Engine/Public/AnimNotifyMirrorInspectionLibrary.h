#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyEventReference.h"
#include "BlueprintFunctionLibrary.h"
#include "AnimNotifyMirrorInspectionLibrary.generated.h"

class UMirrorDataTable;

UCLASS(Blueprintable)
class ENGINE_API UAnimNotifyMirrorInspectionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAnimNotifyMirrorInspectionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsTriggeredByMirroredAnimation(const FAnimNotifyEventReference& EventReference);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UMirrorDataTable* GetMirrorDataTable(const FAnimNotifyEventReference& EventReference);
    
};


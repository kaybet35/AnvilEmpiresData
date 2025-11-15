#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyEventReference.h"
#include "BlueprintFunctionLibrary.h"
#include "AnimNotifyLibrary.generated.h"

UCLASS(Blueprintable)
class ENGINE_API UAnimNotifyLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAnimNotifyLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NotifyStateReachedEnd(const FAnimNotifyEventReference& EventReference);
    
};


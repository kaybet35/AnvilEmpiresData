#pragma once
#include "CoreMinimal.h"
#include "Object.generated.h"

UCLASS(Abstract, Blueprintable, Config=Engine)
class UObject : public UObjectBaseUtility {
    GENERATED_BODY()
public:
    UObject();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ExecuteUbergraph(int32 EntryPoint);
    
};


#pragma once
#include "CoreMinimal.h"
#include "BlueprintFunctionLibrary.h"
#include "CachedAnimStateData.h"
#include "CachedAnimDataLibrary.generated.h"

class UAnimInstance;

UCLASS(Blueprintable)
class ENGINE_API UCachedAnimDataLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCachedAnimDataLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool StateMachine_IsStateRelevant(UAnimInstance* InAnimInstance, const FCachedAnimStateData& CachedAnimStateData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float StateMachine_GetLocalWeight(UAnimInstance* InAnimInstance, const FCachedAnimStateData& CachedAnimStateData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float StateMachine_GetGlobalWeight(UAnimInstance* InAnimInstance, const FCachedAnimStateData& CachedAnimStateData);
    
};


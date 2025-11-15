#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyEventReference.h"
#include "BlueprintFunctionLibrary.h"
#include "AnimNotifyStateMachineInspectionLibrary.generated.h"

class UAnimInstance;

UCLASS(Blueprintable)
class ENGINE_API UAnimNotifyStateMachineInspectionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAnimNotifyStateMachineInspectionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsTriggeredByStateMachine(const FAnimNotifyEventReference& EventReference, UAnimInstance* AnimInstance, FName StateMachineName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsTriggeredByStateInStateMachine(const FAnimNotifyEventReference& EventReference, UAnimInstance* AnimInstance, FName StateMachineName, FName StateName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsTriggeredByState(const FAnimNotifyEventReference& EventReference, UAnimInstance* AnimInstance, FName StateName);
    
};


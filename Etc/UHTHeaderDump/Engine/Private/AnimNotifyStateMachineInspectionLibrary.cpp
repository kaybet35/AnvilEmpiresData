#include "AnimNotifyStateMachineInspectionLibrary.h"

UAnimNotifyStateMachineInspectionLibrary::UAnimNotifyStateMachineInspectionLibrary() {
}

bool UAnimNotifyStateMachineInspectionLibrary::IsTriggeredByStateMachine(const FAnimNotifyEventReference& EventReference, UAnimInstance* AnimInstance, FName StateMachineName) {
    return false;
}

bool UAnimNotifyStateMachineInspectionLibrary::IsTriggeredByStateInStateMachine(const FAnimNotifyEventReference& EventReference, UAnimInstance* AnimInstance, FName StateMachineName, FName StateName) {
    return false;
}

bool UAnimNotifyStateMachineInspectionLibrary::IsTriggeredByState(const FAnimNotifyEventReference& EventReference, UAnimInstance* AnimInstance, FName StateName) {
    return false;
}



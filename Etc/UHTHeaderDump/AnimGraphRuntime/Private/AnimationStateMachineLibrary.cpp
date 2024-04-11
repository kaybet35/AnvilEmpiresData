#include "AnimationStateMachineLibrary.h"

UAnimationStateMachineLibrary::UAnimationStateMachineLibrary() {
}

void UAnimationStateMachineLibrary::SetState(const FAnimUpdateContext& UpdateContext, const FAnimationStateMachineReference& Node, FName TargetState, float Duration, TEnumAsByte<ETransitionLogicType::Type> BlendType, UBlendProfile* BlendProfile, EAlphaBlendOption AlphaBlendOption, UCurveFloat* CustomBlendCurve) {
}

bool UAnimationStateMachineLibrary::IsStateBlendingOut(const FAnimUpdateContext& UpdateContext, const FAnimationStateResultReference& Node) {
    return false;
}

bool UAnimationStateMachineLibrary::IsStateBlendingIn(const FAnimUpdateContext& UpdateContext, const FAnimationStateResultReference& Node) {
    return false;
}

FName UAnimationStateMachineLibrary::GetState(const FAnimUpdateContext& UpdateContext, const FAnimationStateMachineReference& Node) {
    return NAME_None;
}

float UAnimationStateMachineLibrary::GetRelevantAnimTimeRemainingFraction(const FAnimUpdateContext& UpdateContext, const FAnimationStateResultReference& Node) {
    return 0.0f;
}

float UAnimationStateMachineLibrary::GetRelevantAnimTimeRemaining(const FAnimUpdateContext& UpdateContext, const FAnimationStateResultReference& Node) {
    return 0.0f;
}

void UAnimationStateMachineLibrary::ConvertToAnimationStateResultPure(const FAnimNodeReference& Node, FAnimationStateResultReference& AnimationState, bool& Result) {
}

void UAnimationStateMachineLibrary::ConvertToAnimationStateResult(const FAnimNodeReference& Node, FAnimationStateResultReference& AnimationState, EAnimNodeReferenceConversionResult& Result) {
}

void UAnimationStateMachineLibrary::ConvertToAnimationStateMachinePure(const FAnimNodeReference& Node, FAnimationStateMachineReference& AnimationState, bool& Result) {
}

void UAnimationStateMachineLibrary::ConvertToAnimationStateMachine(const FAnimNodeReference& Node, FAnimationStateMachineReference& AnimationState, EAnimNodeReferenceConversionResult& Result) {
}



#include "IKRigComponent.h"

UIKRigComponent::UIKRigComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UIKRigComponent::SetIKRigGoalTransform(const FName GoalName, const FTransform Transform, const float PositionAlpha, const float RotationAlpha) {
}

void UIKRigComponent::SetIKRigGoalPositionAndRotation(const FName GoalName, const FVector Position, const FQuat Rotation, const float PositionAlpha, const float RotationAlpha) {
}

void UIKRigComponent::SetIKRigGoal(const FIKRigGoal& Goal) {
}

void UIKRigComponent::ClearAllGoals() {
}



#include "AnimExecutionContextLibrary.h"

UAnimExecutionContextLibrary::UAnimExecutionContextLibrary() {
}

float UAnimExecutionContextLibrary::GetDeltaTime(const FAnimUpdateContext& Context) {
    return 0.0f;
}

float UAnimExecutionContextLibrary::GetCurrentWeight(const FAnimUpdateContext& Context) {
    return 0.0f;
}

FAnimNodeReference UAnimExecutionContextLibrary::GetAnimNodeReference(UAnimInstance* Instance, int32 Index) {
    return FAnimNodeReference{};
}

UAnimInstance* UAnimExecutionContextLibrary::GetAnimInstance(const FAnimExecutionContext& Context) {
    return NULL;
}

FAnimUpdateContext UAnimExecutionContextLibrary::ConvertToUpdateContext(const FAnimExecutionContext& Context, EAnimExecutionContextConversionResult& Result) {
    return FAnimUpdateContext{};
}

FAnimPoseContext UAnimExecutionContextLibrary::ConvertToPoseContext(const FAnimExecutionContext& Context, EAnimExecutionContextConversionResult& Result) {
    return FAnimPoseContext{};
}

FAnimInitializationContext UAnimExecutionContextLibrary::ConvertToInitializationContext(const FAnimExecutionContext& Context, EAnimExecutionContextConversionResult& Result) {
    return FAnimInitializationContext{};
}

FAnimComponentSpacePoseContext UAnimExecutionContextLibrary::ConvertToComponentSpacePoseContext(const FAnimExecutionContext& Context, EAnimExecutionContextConversionResult& Result) {
    return FAnimComponentSpacePoseContext{};
}



#include "BlendSpacePlayerLibrary.h"

UBlendSpacePlayerLibrary::UBlendSpacePlayerLibrary() {
}

bool UBlendSpacePlayerLibrary::ShouldResetPlayTimeWhenBlendSpaceChanges(const FBlendSpacePlayerReference& BlendSpacePlayer) {
    return false;
}

FBlendSpacePlayerReference UBlendSpacePlayerLibrary::SetResetPlayTimeWhenBlendSpaceChanges(const FBlendSpacePlayerReference& BlendSpacePlayer, bool bReset) {
    return FBlendSpacePlayerReference{};
}

FBlendSpacePlayerReference UBlendSpacePlayerLibrary::SetPlayRate(const FBlendSpacePlayerReference& BlendSpacePlayer, float PlayRate) {
    return FBlendSpacePlayerReference{};
}

FBlendSpacePlayerReference UBlendSpacePlayerLibrary::SetLoop(const FBlendSpacePlayerReference& BlendSpacePlayer, bool bLoop) {
    return FBlendSpacePlayerReference{};
}

FBlendSpacePlayerReference UBlendSpacePlayerLibrary::SetBlendSpaceWithInertialBlending(const FAnimUpdateContext& UpdateContext, const FBlendSpacePlayerReference& BlendSpacePlayer, UBlendSpace* BlendSpace, float BlendTime) {
    return FBlendSpacePlayerReference{};
}

FBlendSpacePlayerReference UBlendSpacePlayerLibrary::SetBlendSpace(const FBlendSpacePlayerReference& BlendSpacePlayer, UBlendSpace* BlendSpace) {
    return FBlendSpacePlayerReference{};
}

float UBlendSpacePlayerLibrary::GetStartPosition(const FBlendSpacePlayerReference& BlendSpacePlayer) {
    return 0.0f;
}

FVector UBlendSpacePlayerLibrary::GetPosition(const FBlendSpacePlayerReference& BlendSpacePlayer) {
    return FVector{};
}

float UBlendSpacePlayerLibrary::GetPlayRate(const FBlendSpacePlayerReference& BlendSpacePlayer) {
    return 0.0f;
}

bool UBlendSpacePlayerLibrary::GetLoop(const FBlendSpacePlayerReference& BlendSpacePlayer) {
    return false;
}

UBlendSpace* UBlendSpacePlayerLibrary::GetBlendSpace(const FBlendSpacePlayerReference& BlendSpacePlayer) {
    return NULL;
}

void UBlendSpacePlayerLibrary::ConvertToBlendSpacePlayerPure(const FAnimNodeReference& Node, FBlendSpacePlayerReference& BlendSpacePlayer, bool& Result) {
}

FBlendSpacePlayerReference UBlendSpacePlayerLibrary::ConvertToBlendSpacePlayer(const FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result) {
    return FBlendSpacePlayerReference{};
}



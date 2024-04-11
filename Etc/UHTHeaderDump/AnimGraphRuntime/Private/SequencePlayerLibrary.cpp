#include "SequencePlayerLibrary.h"

USequencePlayerLibrary::USequencePlayerLibrary() {
}

FSequencePlayerReference USequencePlayerLibrary::SetStartPosition(const FSequencePlayerReference& SequencePlayer, float StartPosition) {
    return FSequencePlayerReference{};
}

FSequencePlayerReference USequencePlayerLibrary::SetSequenceWithInertialBlending(const FAnimUpdateContext& UpdateContext, const FSequencePlayerReference& SequencePlayer, UAnimSequenceBase* Sequence, float BlendTime) {
    return FSequencePlayerReference{};
}

FSequencePlayerReference USequencePlayerLibrary::SetSequence(const FSequencePlayerReference& SequencePlayer, UAnimSequenceBase* Sequence) {
    return FSequencePlayerReference{};
}

FSequencePlayerReference USequencePlayerLibrary::SetPlayRate(const FSequencePlayerReference& SequencePlayer, float PlayRate) {
    return FSequencePlayerReference{};
}

FSequencePlayerReference USequencePlayerLibrary::SetAccumulatedTime(const FSequencePlayerReference& SequencePlayer, float Time) {
    return FSequencePlayerReference{};
}

float USequencePlayerLibrary::GetStartPosition(const FSequencePlayerReference& SequencePlayer) {
    return 0.0f;
}

UAnimSequenceBase* USequencePlayerLibrary::GetSequencePure(const FSequencePlayerReference& SequencePlayer) {
    return NULL;
}

FSequencePlayerReference USequencePlayerLibrary::GetSequence(const FSequencePlayerReference& SequencePlayer, UAnimSequenceBase*& SequenceBase) {
    return FSequencePlayerReference{};
}

float USequencePlayerLibrary::GetPlayRate(const FSequencePlayerReference& SequencePlayer) {
    return 0.0f;
}

bool USequencePlayerLibrary::GetLoopAnimation(const FSequencePlayerReference& SequencePlayer) {
    return false;
}

float USequencePlayerLibrary::GetAccumulatedTime(const FSequencePlayerReference& SequencePlayer) {
    return 0.0f;
}

void USequencePlayerLibrary::ConvertToSequencePlayerPure(const FAnimNodeReference& Node, FSequencePlayerReference& SequencePlayer, bool& Result) {
}

FSequencePlayerReference USequencePlayerLibrary::ConvertToSequencePlayer(const FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result) {
    return FSequencePlayerReference{};
}

float USequencePlayerLibrary::ComputePlayRateFromDuration(const FSequencePlayerReference& SequencePlayer, float Duration) {
    return 0.0f;
}



#include "SequenceEvaluatorLibrary.h"

USequenceEvaluatorLibrary::USequenceEvaluatorLibrary() {
}

FSequenceEvaluatorReference USequenceEvaluatorLibrary::SetSequenceWithInertialBlending(const FAnimUpdateContext& UpdateContext, const FSequenceEvaluatorReference& SequenceEvaluator, UAnimSequenceBase* Sequence, float BlendTime) {
    return FSequenceEvaluatorReference{};
}

FSequenceEvaluatorReference USequenceEvaluatorLibrary::SetSequence(const FSequenceEvaluatorReference& SequenceEvaluator, UAnimSequenceBase* Sequence) {
    return FSequenceEvaluatorReference{};
}

FSequenceEvaluatorReference USequenceEvaluatorLibrary::SetExplicitTime(const FSequenceEvaluatorReference& SequenceEvaluator, float Time) {
    return FSequenceEvaluatorReference{};
}

UAnimSequenceBase* USequenceEvaluatorLibrary::GetSequence(const FSequenceEvaluatorReference& SequenceEvaluator) {
    return NULL;
}

float USequenceEvaluatorLibrary::GetAccumulatedTime(const FSequenceEvaluatorReference& SequenceEvaluator) {
    return 0.0f;
}

void USequenceEvaluatorLibrary::ConvertToSequenceEvaluatorPure(const FAnimNodeReference& Node, FSequenceEvaluatorReference& SequenceEvaluator, bool& Result) {
}

FSequenceEvaluatorReference USequenceEvaluatorLibrary::ConvertToSequenceEvaluator(const FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result) {
    return FSequenceEvaluatorReference{};
}

FSequenceEvaluatorReference USequenceEvaluatorLibrary::AdvanceTime(const FAnimUpdateContext& UpdateContext, const FSequenceEvaluatorReference& SequenceEvaluator, float PlayRate) {
    return FSequenceEvaluatorReference{};
}



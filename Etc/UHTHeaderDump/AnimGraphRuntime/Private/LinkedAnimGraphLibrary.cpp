#include "LinkedAnimGraphLibrary.h"

ULinkedAnimGraphLibrary::ULinkedAnimGraphLibrary() {
}

bool ULinkedAnimGraphLibrary::HasLinkedAnimInstance(const FLinkedAnimGraphReference& Node) {
    return false;
}

UAnimInstance* ULinkedAnimGraphLibrary::GetLinkedAnimInstance(const FLinkedAnimGraphReference& Node) {
    return NULL;
}

void ULinkedAnimGraphLibrary::ConvertToLinkedAnimGraphPure(const FAnimNodeReference& Node, FLinkedAnimGraphReference& LinkedAnimGraph, bool& Result) {
}

FLinkedAnimGraphReference ULinkedAnimGraphLibrary::ConvertToLinkedAnimGraph(const FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result) {
    return FLinkedAnimGraphReference{};
}



#include "SkeletalControlLibrary.h"

USkeletalControlLibrary::USkeletalControlLibrary() {
}

FSkeletalControlReference USkeletalControlLibrary::SetAlpha(const FSkeletalControlReference& SkeletalControl, float Alpha) {
    return FSkeletalControlReference{};
}

float USkeletalControlLibrary::GetAlpha(const FSkeletalControlReference& SkeletalControl) {
    return 0.0f;
}

void USkeletalControlLibrary::ConvertToSkeletalControlPure(const FAnimNodeReference& Node, FSkeletalControlReference& SkeletalControl, bool& Result) {
}

FSkeletalControlReference USkeletalControlLibrary::ConvertToSkeletalControl(const FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result) {
    return FSkeletalControlReference{};
}



#include "LayeredBoneBlendLibrary.h"

ULayeredBoneBlendLibrary::ULayeredBoneBlendLibrary() {
}

FLayeredBoneBlendReference ULayeredBoneBlendLibrary::SetBlendMask(const FAnimUpdateContext& UpdateContext, const FLayeredBoneBlendReference& LayeredBoneBlend, int32 PoseIndex, FName BlendMaskName) {
    return FLayeredBoneBlendReference{};
}

int32 ULayeredBoneBlendLibrary::GetNumPoses(const FLayeredBoneBlendReference& LayeredBoneBlend) {
    return 0;
}

FLayeredBoneBlendReference ULayeredBoneBlendLibrary::ConvertToLayeredBoneBlend(const FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result) {
    return FLayeredBoneBlendReference{};
}

void ULayeredBoneBlendLibrary::ConvertToLayeredBlendPerBonePure(const FAnimNodeReference& Node, FLayeredBoneBlendReference& LayeredBoneBlend, bool& Result) {
}



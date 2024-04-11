#include "SequenceCameraShakeTestUtil.h"

USequenceCameraShakeTestUtil::USequenceCameraShakeTestUtil() {
}

bool USequenceCameraShakeTestUtil::GetPostProcessBlendCache(APlayerController* PlayerController, int32 PPIndex, FPostProcessSettings& OutPPSettings, float& OutPPBlendWeight) {
    return false;
}

FMinimalViewInfo USequenceCameraShakeTestUtil::GetLastFrameCameraCachePOV(APlayerController* PlayerController) {
    return FMinimalViewInfo{};
}

FMinimalViewInfo USequenceCameraShakeTestUtil::GetCameraCachePOV(APlayerController* PlayerController) {
    return FMinimalViewInfo{};
}



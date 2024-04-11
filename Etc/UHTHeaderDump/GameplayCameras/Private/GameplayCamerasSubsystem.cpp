#include "GameplayCamerasSubsystem.h"

UGameplayCamerasSubsystem::UGameplayCamerasSubsystem() {
}

void UGameplayCamerasSubsystem::StopCameraAnimation(APlayerController* PlayerController, const FCameraAnimationHandle& Handle, bool bImmediate) {
}

void UGameplayCamerasSubsystem::StopAllCameraAnimationsOf(APlayerController* PlayerController, UCameraAnimationSequence* Sequence, bool bImmediate) {
}

void UGameplayCamerasSubsystem::StopAllCameraAnimations(APlayerController* PlayerController, bool bImmediate) {
}

FCameraAnimationHandle UGameplayCamerasSubsystem::PlayCameraAnimation(APlayerController* PlayerController, UCameraAnimationSequence* Sequence, FCameraAnimationParams Params) {
    return FCameraAnimationHandle{};
}

bool UGameplayCamerasSubsystem::IsCameraAnimationActive(APlayerController* PlayerController, const FCameraAnimationHandle& Handle) const {
    return false;
}



#include "VisBowAnimInstance.h"

UVisBowAnimInstance::UVisBowAnimInstance() {
    this->NativePlayerAccuracy = 0.00f;
    this->NativeCharacterIsAiming = false;
    this->NativeCharacterSecondaryMode = false;
    this->NativeActivityState = EAnvilSimActivityState::None;
    this->NativeCurrentActivityChainIndex = 0;
    this->NativeCurrentMontagePosition = 0.00f;
}


